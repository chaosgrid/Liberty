#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acb360);

#define public_6acb381 _public_6acb381
#define public_6acb3b0 _public_6acb3b0

PROC_DECLARE(0x6acb360, internal_6acb360, public_6acb360);
extern "C" NAKED register_t __cdecl internal_6acb360()
{
    __asm
    {
        push esi
        push edi
        push ebx
        push ebp
        mov edx, dword ptr ss : [esp+0x18]
        sub esp, 0x140
        mov esi, 0x10
        mov edi, 0xFF00FF00
        mov ebp, 0xFF00FF
        lea ecx, ss:[esp-4]
        public_6acb381 : nop
        mov eax, dword ptr ds : [edx]
        add edx, 4
        mov ebx, eax
        and eax, edi
        and ebx, ebp
        add ecx, 4
        rol eax, 8
        ror ebx, 8
        xor eax, ebx
        dec esi
        mov dword ptr ds : [ecx], eax
        jne public_6acb381
        mov ebp, dword ptr ss : [esp+0x154]
        lea ecx, ss:[esp+8]
        mov edx, 0x20
        xor eax, eax
        xor ebx, ebx
        public_6acb3b0 : nop
        mov eax, dword ptr ds : [ecx-8]
        mov ebx, dword ptr ds : [ecx-4]
        mov esi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+4]
        xor eax, esi
        xor ebx, edi
        mov esi, dword ptr ds : [ecx+0x18]
        mov edi, dword ptr ds : [ecx+0x1C]
        xor eax, esi
        xor ebx, edi
        mov esi, dword ptr ds : [ecx+0x2C]
        mov edi, dword ptr ds : [ecx+0x30]
        xor eax, esi
        add ecx, 8
        rol eax, 1
        xor ebx, edi
        rol ebx, 1
        mov dword ptr ds : [ecx+0x30], eax
        dec edx
        mov dword ptr ds : [ecx+0x34], ebx
        jne public_6acb3b0
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+0x10]
        mov ebp, ecx
        xor ebp, edx
        and ebp, ebx
        mov esi, eax
        rol esi, 5
        add edi, esi
        mov esi, dword ptr ss : [esp]
        ror ebx, 1
        xor ebp, edx
        ror ebx, 1
        lea edi, ds:[esi+edi+0x5A827999]
        add edi, ebp
        mov esi, ebx
        xor esi, ecx
        mov ebp, edi
        rol ebp, 5
        and esi, eax
        add edx, ebp
        ror eax, 1
        mov ebp, dword ptr ss : [esp+4]
        ror eax, 1
        xor esi, ecx
        lea edx, ss:[ebp+edx+0x5A827999]
        mov ebp, eax
        add edx, esi
        xor ebp, ebx
        and ebp, edi
        mov esi, edx
        rol esi, 5
        add ecx, esi
        mov esi, dword ptr ss : [esp+8]
        ror edi, 1
        xor ebp, ebx
        ror edi, 1
        lea ecx, ds:[esi+ecx+0x5A827999]
        add ecx, ebp
        mov esi, edi
        xor esi, eax
        mov ebp, ecx
        rol ebp, 5
        and esi, edx
        add ebx, ebp
        ror edx, 1
        mov ebp, dword ptr ss : [esp+0xC]
        ror edx, 1
        xor esi, eax
        lea ebx, ss:[ebp+ebx+0x5A827999]
        mov ebp, edx
        add ebx, esi
        xor ebp, edi
        and ebp, ecx
        mov esi, ebx
        rol esi, 5
        add eax, esi
        mov esi, dword ptr ss : [esp+0x10]
        ror ecx, 1
        xor ebp, edi
        ror ecx, 1
        lea eax, ds:[esi+eax+0x5A827999]
        add eax, ebp
        mov esi, ecx
        xor esi, edx
        mov ebp, eax
        rol ebp, 5
        and esi, ebx
        add edi, ebp
        ror ebx, 1
        mov ebp, dword ptr ss : [esp+0x14]
        ror ebx, 1
        xor esi, edx
        lea edi, ss:[ebp+edi+0x5A827999]
        mov ebp, ebx
        add edi, esi
        xor ebp, ecx
        and ebp, eax
        mov esi, edi
        rol esi, 5
        add edx, esi
        mov esi, dword ptr ss : [esp+0x18]
        ror eax, 1
        xor ebp, ecx
        ror eax, 1
        lea edx, ds:[esi+edx+0x5A827999]
        add edx, ebp
        mov esi, eax
        xor esi, ebx
        mov ebp, edx
        rol ebp, 5
        and esi, edi
        add ecx, ebp
        ror edi, 1
        mov ebp, dword ptr ss : [esp+0x1C]
        ror edi, 1
        xor esi, ebx
        lea ecx, ss:[ebp+ecx+0x5A827999]
        mov ebp, edi
        add ecx, esi
        xor ebp, eax
        and ebp, edx
        mov esi, ecx
        rol esi, 5
        add ebx, esi
        mov esi, dword ptr ss : [esp+0x20]
        ror edx, 1
        xor ebp, eax
        ror edx, 1
        lea ebx, ds:[esi+ebx+0x5A827999]
        add ebx, ebp
        mov esi, edx
        xor esi, edi
        mov ebp, ebx
        rol ebp, 5
        and esi, ecx
        add eax, ebp
        ror ecx, 1
        mov ebp, dword ptr ss : [esp+0x24]
        ror ecx, 1
        xor esi, edi
        lea eax, ss:[ebp+eax+0x5A827999]
        mov ebp, ecx
        add eax, esi
        xor ebp, edx
        and ebp, ebx
        mov esi, eax
        rol esi, 5
        add edi, esi
        mov esi, dword ptr ss : [esp+0x28]
        ror ebx, 1
        xor ebp, edx
        ror ebx, 1
        lea edi, ds:[esi+edi+0x5A827999]
        add edi, ebp
        mov esi, ebx
        xor esi, ecx
        mov ebp, edi
        rol ebp, 5
        and esi, eax
        add edx, ebp
        ror eax, 1
        mov ebp, dword ptr ss : [esp+0x2C]
        ror eax, 1
        xor esi, ecx
        lea edx, ss:[ebp+edx+0x5A827999]
        mov ebp, eax
        add edx, esi
        xor ebp, ebx
        and ebp, edi
        mov esi, edx
        rol esi, 5
        add ecx, esi
        mov esi, dword ptr ss : [esp+0x30]
        ror edi, 1
        xor ebp, ebx
        ror edi, 1
        lea ecx, ds:[esi+ecx+0x5A827999]
        add ecx, ebp
        mov esi, edi
        xor esi, eax
        mov ebp, ecx
        rol ebp, 5
        and esi, edx
        add ebx, ebp
        ror edx, 1
        mov ebp, dword ptr ss : [esp+0x34]
        ror edx, 1
        xor esi, eax
        lea ebx, ss:[ebp+ebx+0x5A827999]
        mov ebp, edx
        add ebx, esi
        xor ebp, edi
        and ebp, ecx
        mov esi, ebx
        rol esi, 5
        add eax, esi
        mov esi, dword ptr ss : [esp+0x38]
        ror ecx, 1
        xor ebp, edi
        ror ecx, 1
        lea eax, ds:[esi+eax+0x5A827999]
        add eax, ebp
        mov esi, ecx
        xor esi, edx
        mov ebp, eax
        rol ebp, 5
        and esi, ebx
        add edi, ebp
        ror ebx, 1
        mov ebp, dword ptr ss : [esp+0x3C]
        ror ebx, 1
        xor esi, edx
        lea edi, ss:[ebp+edi+0x5A827999]
        mov ebp, ebx
        add edi, esi
        xor ebp, ecx
        and ebp, eax
        mov esi, edi
        rol esi, 5
        add edx, esi
        mov esi, dword ptr ss : [esp+0x40]
        ror eax, 1
        xor ebp, ecx
        ror eax, 1
        lea edx, ds:[esi+edx+0x5A827999]
        add edx, ebp
        mov esi, eax
        xor esi, ebx
        mov ebp, edx
        rol ebp, 5
        and esi, edi
        add ecx, ebp
        ror edi, 1
        mov ebp, dword ptr ss : [esp+0x44]
        ror edi, 1
        xor esi, ebx
        lea ecx, ss:[ebp+ecx+0x5A827999]
        mov ebp, edi
        add ecx, esi
        xor ebp, eax
        and ebp, edx
        mov esi, ecx
        rol esi, 5
        add ebx, esi
        mov esi, dword ptr ss : [esp+0x48]
        ror edx, 1
        xor ebp, eax
        ror edx, 1
        lea ebx, ds:[esi+ebx+0x5A827999]
        add ebx, ebp
        mov esi, edx
        xor esi, edi
        mov ebp, ebx
        rol ebp, 5
        and esi, ecx
        add eax, ebp
        ror ecx, 1
        mov ebp, dword ptr ss : [esp+0x4C]
        ror ecx, 1
        xor esi, edi
        lea eax, ss:[ebp+eax+0x5A827999]
        mov ebp, ecx
        add eax, esi
        xor ebp, ebx
        xor ebp, edx
        mov esi, eax
        rol esi, 5
        ror ebx, 1
        add edi, esi
        ror ebx, 1
        mov esi, dword ptr ss : [esp+0x50]
        lea edi, ss:[ebp+edi+0x6ED9EBA1]
        mov ebp, ebx
        add edi, esi
        xor ebp, eax
        xor ebp, ecx
        mov esi, edi
        rol esi, 5
        ror eax, 1
        add edx, esi
        ror eax, 1
        mov esi, dword ptr ss : [esp+0x54]
        lea edx, ss:[ebp+edx+0x6ED9EBA1]
        mov ebp, eax
        add edx, esi
        xor ebp, edi
        xor ebp, ebx
        mov esi, edx
        rol esi, 5
        ror edi, 1
        add ecx, esi
        ror edi, 1
        mov esi, dword ptr ss : [esp+0x58]
        lea ecx, ss:[ebp+ecx+0x6ED9EBA1]
        mov ebp, edi
        add ecx, esi
        xor ebp, edx
        xor ebp, eax
        mov esi, ecx
        rol esi, 5
        ror edx, 1
        add ebx, esi
        ror edx, 1
        mov esi, dword ptr ss : [esp+0x5C]
        lea ebx, ss:[ebp+ebx+0x6ED9EBA1]
        mov ebp, edx
        add ebx, esi
        xor ebp, ecx
        xor ebp, edi
        mov esi, ebx
        rol esi, 5
        ror ecx, 1
        add eax, esi
        ror ecx, 1
        mov esi, dword ptr ss : [esp+0x60]
        lea eax, ss:[ebp+eax+0x6ED9EBA1]
        mov ebp, ecx
        add eax, esi
        xor ebp, ebx
        xor ebp, edx
        mov esi, eax
        rol esi, 5
        ror ebx, 1
        add edi, esi
        ror ebx, 1
        mov esi, dword ptr ss : [esp+0x64]
        lea edi, ss:[ebp+edi+0x6ED9EBA1]
        mov ebp, ebx
        add edi, esi
        xor ebp, eax
        xor ebp, ecx
        mov esi, edi
        rol esi, 5
        ror eax, 1
        add edx, esi
        ror eax, 1
        mov esi, dword ptr ss : [esp+0x68]
        lea edx, ss:[ebp+edx+0x6ED9EBA1]
        mov ebp, eax
        add edx, esi
        xor ebp, edi
        xor ebp, ebx
        mov esi, edx
        rol esi, 5
        ror edi, 1
        add ecx, esi
        ror edi, 1
        mov esi, dword ptr ss : [esp+0x6C]
        lea ecx, ss:[ebp+ecx+0x6ED9EBA1]
        mov ebp, edi
        add ecx, esi
        xor ebp, edx
        xor ebp, eax
        mov esi, ecx
        rol esi, 5
        ror edx, 1
        add ebx, esi
        ror edx, 1
        mov esi, dword ptr ss : [esp+0x70]
        lea ebx, ss:[ebp+ebx+0x6ED9EBA1]
        mov ebp, edx
        add ebx, esi
        xor ebp, ecx
        xor ebp, edi
        mov esi, ebx
        rol esi, 5
        ror ecx, 1
        add eax, esi
        ror ecx, 1
        mov esi, dword ptr ss : [esp+0x74]
        lea eax, ss:[ebp+eax+0x6ED9EBA1]
        mov ebp, ecx
        add eax, esi
        xor ebp, ebx
        xor ebp, edx
        mov esi, eax
        rol esi, 5
        ror ebx, 1
        add edi, esi
        ror ebx, 1
        mov esi, dword ptr ss : [esp+0x78]
        lea edi, ss:[ebp+edi+0x6ED9EBA1]
        mov ebp, ebx
        add edi, esi
        xor ebp, eax
        xor ebp, ecx
        mov esi, edi
        rol esi, 5
        ror eax, 1
        add edx, esi
        ror eax, 1
        mov esi, dword ptr ss : [esp+0x7C]
        lea edx, ss:[ebp+edx+0x6ED9EBA1]
        mov ebp, eax
        add edx, esi
        xor ebp, edi
        xor ebp, ebx
        mov esi, edx
        rol esi, 5
        ror edi, 1
        add ecx, esi
        ror edi, 1
        mov esi, dword ptr ss : [esp+0x80]
        lea ecx, ss:[ebp+ecx+0x6ED9EBA1]
        mov ebp, edi
        add ecx, esi
        xor ebp, edx
        xor ebp, eax
        mov esi, ecx
        rol esi, 5
        ror edx, 1
        add ebx, esi
        ror edx, 1
        mov esi, dword ptr ss : [esp+0x84]
        lea ebx, ss:[ebp+ebx+0x6ED9EBA1]
        mov ebp, edx
        add ebx, esi
        xor ebp, ecx
        xor ebp, edi
        mov esi, ebx
        rol esi, 5
        ror ecx, 1
        add eax, esi
        ror ecx, 1
        mov esi, dword ptr ss : [esp+0x88]
        lea eax, ss:[ebp+eax+0x6ED9EBA1]
        mov ebp, ecx
        add eax, esi
        xor ebp, ebx
        xor ebp, edx
        mov esi, eax
        rol esi, 5
        ror ebx, 1
        add edi, esi
        ror ebx, 1
        mov esi, dword ptr ss : [esp+0x8C]
        lea edi, ss:[ebp+edi+0x6ED9EBA1]
        mov ebp, ebx
        add edi, esi
        xor ebp, eax
        xor ebp, ecx
        mov esi, edi
        rol esi, 5
        ror eax, 1
        add edx, esi
        ror eax, 1
        mov esi, dword ptr ss : [esp+0x90]
        lea edx, ss:[ebp+edx+0x6ED9EBA1]
        mov ebp, eax
        add edx, esi
        xor ebp, edi
        xor ebp, ebx
        mov esi, edx
        rol esi, 5
        ror edi, 1
        add ecx, esi
        ror edi, 1
        mov esi, dword ptr ss : [esp+0x94]
        lea ecx, ss:[ebp+ecx+0x6ED9EBA1]
        mov ebp, edi
        add ecx, esi
        xor ebp, edx
        xor ebp, eax
        mov esi, ecx
        rol esi, 5
        ror edx, 1
        add ebx, esi
        ror edx, 1
        mov esi, dword ptr ss : [esp+0x98]
        lea ebx, ss:[ebp+ebx+0x6ED9EBA1]
        mov ebp, edx
        add ebx, esi
        xor ebp, ecx
        xor ebp, edi
        mov esi, ebx
        rol esi, 5
        ror ecx, 1
        add eax, esi
        ror ecx, 1
        mov esi, dword ptr ss : [esp+0x9C]
        lea eax, ss:[ebp+eax+0x6ED9EBA1]
        mov ebp, ecx
        add eax, esi
        mov ebp, ebx
        mov esi, eax
        or ebp, ecx
        rol esi, 5
        and ebp, edx
        add edi, esi
        mov esi, dword ptr ss : [esp+0xA0]
        add edi, esi
        mov esi, ebx
        and esi, ecx
        add edi, 0x8F1BBCDC
        ror ebx, 1
        or esi, ebp
        ror ebx, 1
        add edi, esi
        mov ebp, eax
        mov esi, edi
        rol esi, 5
        or ebp, ebx
        add edx, esi
        and ebp, ecx
        mov esi, dword ptr ss : [esp+0xA4]
        add edx, esi
        mov esi, eax
        and esi, ebx
        add edx, 0x8F1BBCDC
        ror eax, 1
        or esi, ebp
        ror eax, 1
        add edx, esi
        mov ebp, edi
        mov esi, edx
        rol esi, 5
        or ebp, eax
        add ecx, esi
        and ebp, ebx
        mov esi, dword ptr ss : [esp+0xA8]
        add ecx, esi
        mov esi, edi
        and esi, eax
        add ecx, 0x8F1BBCDC
        ror edi, 1
        or esi, ebp
        ror edi, 1
        add ecx, esi
        mov ebp, edx
        mov esi, ecx
        rol esi, 5
        or ebp, edi
        add ebx, esi
        and ebp, eax
        mov esi, dword ptr ss : [esp+0xAC]
        add ebx, esi
        mov esi, edx
        and esi, edi
        add ebx, 0x8F1BBCDC
        ror edx, 1
        or esi, ebp
        ror edx, 1
        add ebx, esi
        mov ebp, ecx
        mov esi, ebx
        rol esi, 5
        or ebp, edx
        add eax, esi
        and ebp, edi
        mov esi, dword ptr ss : [esp+0xB0]
        add eax, esi
        mov esi, ecx
        and esi, edx
        add eax, 0x8F1BBCDC
        ror ecx, 1
        or esi, ebp
        ror ecx, 1
        add eax, esi
        mov ebp, ebx
        mov esi, eax
        rol esi, 5
        or ebp, ecx
        add edi, esi
        and ebp, edx
        mov esi, dword ptr ss : [esp+0xB4]
        add edi, esi
        mov esi, ebx
        and esi, ecx
        add edi, 0x8F1BBCDC
        ror ebx, 1
        or esi, ebp
        ror ebx, 1
        add edi, esi
        mov ebp, eax
        mov esi, edi
        rol esi, 5
        or ebp, ebx
        add edx, esi
        and ebp, ecx
        mov esi, dword ptr ss : [esp+0xB8]
        add edx, esi
        mov esi, eax
        and esi, ebx
        add edx, 0x8F1BBCDC
        ror eax, 1
        or esi, ebp
        ror eax, 1
        add edx, esi
        mov ebp, edi
        mov esi, edx
        rol esi, 5
        or ebp, eax
        add ecx, esi
        and ebp, ebx
        mov esi, dword ptr ss : [esp+0xBC]
        add ecx, esi
        mov esi, edi
        and esi, eax
        add ecx, 0x8F1BBCDC
        ror edi, 1
        or esi, ebp
        ror edi, 1
        add ecx, esi
        mov ebp, edx
        mov esi, ecx
        rol esi, 5
        or ebp, edi
        add ebx, esi
        and ebp, eax
        mov esi, dword ptr ss : [esp+0xC0]
        add ebx, esi
        mov esi, edx
        and esi, edi
        add ebx, 0x8F1BBCDC
        ror edx, 1
        or esi, ebp
        ror edx, 1
        add ebx, esi
        mov ebp, ecx
        mov esi, ebx
        rol esi, 5
        or ebp, edx
        add eax, esi
        and ebp, edi
        mov esi, dword ptr ss : [esp+0xC4]
        add eax, esi
        mov esi, ecx
        and esi, edx
        add eax, 0x8F1BBCDC
        ror ecx, 1
        or esi, ebp
        ror ecx, 1
        add eax, esi
        mov ebp, ebx
        mov esi, eax
        rol esi, 5
        or ebp, ecx
        add edi, esi
        and ebp, edx
        mov esi, dword ptr ss : [esp+0xC8]
        add edi, esi
        mov esi, ebx
        and esi, ecx
        add edi, 0x8F1BBCDC
        ror ebx, 1
        or esi, ebp
        ror ebx, 1
        add edi, esi
        mov ebp, eax
        mov esi, edi
        rol esi, 5
        or ebp, ebx
        add edx, esi
        and ebp, ecx
        mov esi, dword ptr ss : [esp+0xCC]
        add edx, esi
        mov esi, eax
        and esi, ebx
        add edx, 0x8F1BBCDC
        ror eax, 1
        or esi, ebp
        ror eax, 1
        add edx, esi
        mov ebp, edi
        mov esi, edx
        rol esi, 5
        or ebp, eax
        add ecx, esi
        and ebp, ebx
        mov esi, dword ptr ss : [esp+0xD0]
        add ecx, esi
        mov esi, edi
        and esi, eax
        add ecx, 0x8F1BBCDC
        ror edi, 1
        or esi, ebp
        ror edi, 1
        add ecx, esi
        mov ebp, edx
        mov esi, ecx
        rol esi, 5
        or ebp, edi
        add ebx, esi
        and ebp, eax
        mov esi, dword ptr ss : [esp+0xD4]
        add ebx, esi
        mov esi, edx
        and esi, edi
        add ebx, 0x8F1BBCDC
        ror edx, 1
        or esi, ebp
        ror edx, 1
        add ebx, esi
        mov ebp, ecx
        mov esi, ebx
        rol esi, 5
        or ebp, edx
        add eax, esi
        and ebp, edi
        mov esi, dword ptr ss : [esp+0xD8]
        add eax, esi
        mov esi, ecx
        and esi, edx
        add eax, 0x8F1BBCDC
        ror ecx, 1
        or esi, ebp
        ror ecx, 1
        add eax, esi
        mov ebp, ebx
        mov esi, eax
        rol esi, 5
        or ebp, ecx
        add edi, esi
        and ebp, edx
        mov esi, dword ptr ss : [esp+0xDC]
        add edi, esi
        mov esi, ebx
        and esi, ecx
        add edi, 0x8F1BBCDC
        ror ebx, 1
        or esi, ebp
        ror ebx, 1
        add edi, esi
        mov ebp, eax
        mov esi, edi
        rol esi, 5
        or ebp, ebx
        add edx, esi
        and ebp, ecx
        mov esi, dword ptr ss : [esp+0xE0]
        add edx, esi
        mov esi, eax
        and esi, ebx
        add edx, 0x8F1BBCDC
        ror eax, 1
        or esi, ebp
        ror eax, 1
        add edx, esi
        mov ebp, edi
        mov esi, edx
        rol esi, 5
        or ebp, eax
        add ecx, esi
        and ebp, ebx
        mov esi, dword ptr ss : [esp+0xE4]
        add ecx, esi
        mov esi, edi
        and esi, eax
        add ecx, 0x8F1BBCDC
        ror edi, 1
        or esi, ebp
        ror edi, 1
        add ecx, esi
        mov ebp, edx
        mov esi, ecx
        rol esi, 5
        or ebp, edi
        add ebx, esi
        and ebp, eax
        mov esi, dword ptr ss : [esp+0xE8]
        add ebx, esi
        mov esi, edx
        and esi, edi
        add ebx, 0x8F1BBCDC
        ror edx, 1
        or esi, ebp
        ror edx, 1
        add ebx, esi
        mov ebp, ecx
        mov esi, ebx
        rol esi, 5
        or ebp, edx
        add eax, esi
        and ebp, edi
        mov esi, dword ptr ss : [esp+0xEC]
        add eax, esi
        mov esi, ecx
        and esi, edx
        add eax, 0x8F1BBCDC
        ror ecx, 1
        or esi, ebp
        ror ecx, 1
        add eax, esi
        mov ebp, ecx
        xor ebp, ebx
        xor ebp, edx
        mov esi, eax
        rol esi, 5
        ror ebx, 1
        add edi, esi
        ror ebx, 1
        mov esi, dword ptr ss : [esp+0xF0]
        lea edi, ss:[ebp+edi-0x359D3E2A]
        mov ebp, ebx
        add edi, esi
        xor ebp, eax
        xor ebp, ecx
        mov esi, edi
        rol esi, 5
        ror eax, 1
        add edx, esi
        ror eax, 1
        mov esi, dword ptr ss : [esp+0xF4]
        lea edx, ss:[ebp+edx-0x359D3E2A]
        mov ebp, eax
        add edx, esi
        xor ebp, edi
        xor ebp, ebx
        mov esi, edx
        rol esi, 5
        ror edi, 1
        add ecx, esi
        ror edi, 1
        mov esi, dword ptr ss : [esp+0xF8]
        lea ecx, ss:[ebp+ecx-0x359D3E2A]
        mov ebp, edi
        add ecx, esi
        xor ebp, edx
        xor ebp, eax
        mov esi, ecx
        rol esi, 5
        ror edx, 1
        add ebx, esi
        ror edx, 1
        mov esi, dword ptr ss : [esp+0xFC]
        lea ebx, ss:[ebp+ebx-0x359D3E2A]
        mov ebp, edx
        add ebx, esi
        xor ebp, ecx
        xor ebp, edi
        mov esi, ebx
        rol esi, 5
        ror ecx, 1
        add eax, esi
        ror ecx, 1
        mov esi, dword ptr ss : [esp+0x100]
        lea eax, ss:[ebp+eax-0x359D3E2A]
        mov ebp, ecx
        add eax, esi
        xor ebp, ebx
        xor ebp, edx
        mov esi, eax
        rol esi, 5
        ror ebx, 1
        add edi, esi
        ror ebx, 1
        mov esi, dword ptr ss : [esp+0x104]
        lea edi, ss:[ebp+edi-0x359D3E2A]
        mov ebp, ebx
        add edi, esi
        xor ebp, eax
        xor ebp, ecx
        mov esi, edi
        rol esi, 5
        ror eax, 1
        add edx, esi
        ror eax, 1
        mov esi, dword ptr ss : [esp+0x108]
        lea edx, ss:[ebp+edx-0x359D3E2A]
        mov ebp, eax
        add edx, esi
        xor ebp, edi
        xor ebp, ebx
        mov esi, edx
        rol esi, 5
        ror edi, 1
        add ecx, esi
        ror edi, 1
        mov esi, dword ptr ss : [esp+0x10C]
        lea ecx, ss:[ebp+ecx-0x359D3E2A]
        mov ebp, edi
        add ecx, esi
        xor ebp, edx
        xor ebp, eax
        mov esi, ecx
        rol esi, 5
        ror edx, 1
        add ebx, esi
        ror edx, 1
        mov esi, dword ptr ss : [esp+0x110]
        lea ebx, ss:[ebp+ebx-0x359D3E2A]
        mov ebp, edx
        add ebx, esi
        xor ebp, ecx
        xor ebp, edi
        mov esi, ebx
        rol esi, 5
        ror ecx, 1
        add eax, esi
        ror ecx, 1
        mov esi, dword ptr ss : [esp+0x114]
        lea eax, ss:[ebp+eax-0x359D3E2A]
        mov ebp, ecx
        add eax, esi
        xor ebp, ebx
        xor ebp, edx
        mov esi, eax
        rol esi, 5
        ror ebx, 1
        add edi, esi
        ror ebx, 1
        mov esi, dword ptr ss : [esp+0x118]
        lea edi, ss:[ebp+edi-0x359D3E2A]
        mov ebp, ebx
        add edi, esi
        xor ebp, eax
        xor ebp, ecx
        mov esi, edi
        rol esi, 5
        ror eax, 1
        add edx, esi
        ror eax, 1
        mov esi, dword ptr ss : [esp+0x11C]
        lea edx, ss:[ebp+edx-0x359D3E2A]
        mov ebp, eax
        add edx, esi
        xor ebp, edi
        xor ebp, ebx
        mov esi, edx
        rol esi, 5
        ror edi, 1
        add ecx, esi
        ror edi, 1
        mov esi, dword ptr ss : [esp+0x120]
        lea ecx, ss:[ebp+ecx-0x359D3E2A]
        mov ebp, edi
        add ecx, esi
        xor ebp, edx
        xor ebp, eax
        mov esi, ecx
        rol esi, 5
        ror edx, 1
        add ebx, esi
        ror edx, 1
        mov esi, dword ptr ss : [esp+0x124]
        lea ebx, ss:[ebp+ebx-0x359D3E2A]
        mov ebp, edx
        add ebx, esi
        xor ebp, ecx
        xor ebp, edi
        mov esi, ebx
        rol esi, 5
        ror ecx, 1
        add eax, esi
        ror ecx, 1
        mov esi, dword ptr ss : [esp+0x128]
        lea eax, ss:[ebp+eax-0x359D3E2A]
        mov ebp, ecx
        add eax, esi
        xor ebp, ebx
        xor ebp, edx
        mov esi, eax
        rol esi, 5
        ror ebx, 1
        add edi, esi
        ror ebx, 1
        mov esi, dword ptr ss : [esp+0x12C]
        lea edi, ss:[ebp+edi-0x359D3E2A]
        mov ebp, ebx
        add edi, esi
        xor ebp, eax
        xor ebp, ecx
        mov esi, edi
        rol esi, 5
        ror eax, 1
        add edx, esi
        ror eax, 1
        mov esi, dword ptr ss : [esp+0x130]
        lea edx, ss:[ebp+edx-0x359D3E2A]
        mov ebp, eax
        add edx, esi
        xor ebp, edi
        xor ebp, ebx
        mov esi, edx
        rol esi, 5
        ror edi, 1
        add ecx, esi
        ror edi, 1
        mov esi, dword ptr ss : [esp+0x134]
        lea ecx, ss:[ebp+ecx-0x359D3E2A]
        mov ebp, edi
        add ecx, esi
        xor ebp, edx
        xor ebp, eax
        mov esi, ecx
        rol esi, 5
        ror edx, 1
        add ebx, esi
        ror edx, 1
        mov esi, dword ptr ss : [esp+0x138]
        lea ebx, ss:[ebp+ebx-0x359D3E2A]
        mov ebp, edx
        add ebx, esi
        xor ebp, ecx
        xor ebp, edi
        mov esi, ebx
        rol esi, 5
        ror ecx, 1
        add eax, esi
        ror ecx, 1
        mov esi, dword ptr ss : [esp+0x13C]
        add eax, 0xCA62C1D6
        add esi, ebp
        add eax, esi
        mov esi, dword ptr ss : [esp+0x154]
        add esp, 0x140
        mov ebp, dword ptr ds : [esi]
        add eax, ebp
        mov ebp, dword ptr ds : [esi+4]
        add ebx, ebp
        mov ebp, dword ptr ds : [esi+8]
        add ecx, ebp
        mov ebp, dword ptr ds : [esi+0xC]
        add edx, ebp
        mov ebp, dword ptr ds : [esi+0x10]
        add edi, ebp
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi+0x10], edi
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6acb360)
    }
}

#undef public_6acb381
#undef public_6acb3b0
