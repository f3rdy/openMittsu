#ifndef OPENMITTSU_PROTOCOL_NONCE_H_
#define OPENMITTSU_PROTOCOL_NONCE_H_

#include <QByteArray>

class Nonce {
public:
	Nonce();
	Nonce(QByteArray const& nonceData);
	virtual ~Nonce();

	QByteArray const& getNonce() const;
	unsigned char const* getNonceAsCharPtr() const;

	static int getNonceLength();
private:
	QByteArray nonce;
};

#endif // OPENMITTSU_PROTOCOL_NONCE_H_
