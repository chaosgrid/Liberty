#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acef00);

PROC_DECLARE(0x6acef00, internal_6acef00, public_6acef00);
extern "C" NAKED register_t __cdecl internal_6acef00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edx, dword ptr ds : [eax+4]
        push ebp
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax+0xC]
        mov ebp, dword ptr ds : [ecx]
        mov ebx, edi
        xor ebx, esi
        and ebx, edx
        xor ebx, edi
        add ebx, ebp
        mov ebp, dword ptr ds : [eax]
        add ebx, ebp
        rol ebx, 3
        mov eax, esi
        xor eax, edx
        mov ebp, dword ptr ds : [ecx+4]
        and eax, ebx
        xor eax, esi
        add eax, ebp
        add edi, eax
        rol edi, 7
        mov eax, edx
        xor eax, ebx
        mov ebp, dword ptr ds : [ecx+8]
        and eax, edi
        xor eax, edx
        add eax, ebp
        add esi, eax
        rol esi, 0xB
        mov eax, edi
        xor eax, ebx
        mov ebp, dword ptr ds : [ecx+0xC]
        and eax, esi
        xor eax, ebx
        add eax, ebp
        add edx, eax
        rol edx, 0x13
        mov eax, edi
        xor eax, esi
        mov ebp, dword ptr ds : [ecx+0x10]
        and eax, edx
        xor eax, edi
        add eax, ebp
        add ebx, eax
        rol ebx, 3
        mov eax, esi
        xor eax, edx
        mov ebp, dword ptr ds : [ecx+0x14]
        and eax, ebx
        xor eax, esi
        add eax, ebp
        add edi, eax
        rol edi, 7
        mov eax, edx
        xor eax, ebx
        mov ebp, dword ptr ds : [ecx+0x18]
        and eax, edi
        xor eax, edx
        add eax, ebp
        add esi, eax
        rol esi, 0xB
        mov eax, edi
        xor eax, ebx
        mov ebp, dword ptr ds : [ecx+0x1C]
        and eax, esi
        xor eax, ebx
        add eax, ebp
        add edx, eax
        rol edx, 0x13
        mov eax, edi
        xor eax, esi
        mov ebp, dword ptr ds : [ecx+0x20]
        and eax, edx
        xor eax, edi
        add eax, ebp
        add ebx, eax
        rol ebx, 3
        mov eax, esi
        xor eax, edx
        mov ebp, dword ptr ds : [ecx+0x24]
        and eax, ebx
        xor eax, esi
        add eax, ebp
        add edi, eax
        rol edi, 7
        mov eax, edx
        xor eax, ebx
        mov ebp, dword ptr ds : [ecx+0x28]
        and eax, edi
        xor eax, edx
        add eax, ebp
        add esi, eax
        rol esi, 0xB
        mov eax, edi
        xor eax, ebx
        mov ebp, dword ptr ds : [ecx+0x2C]
        and eax, esi
        xor eax, ebx
        add eax, ebp
        add edx, eax
        rol edx, 0x13
        mov eax, edi
        xor eax, esi
        mov ebp, dword ptr ds : [ecx+0x30]
        and eax, edx
        xor eax, edi
        add eax, ebp
        add ebx, eax
        rol ebx, 3
        mov eax, esi
        xor eax, edx
        mov ebp, dword ptr ds : [ecx+0x34]
        and eax, ebx
        xor eax, esi
        add eax, ebp
        add edi, eax
        rol edi, 7
        mov eax, edx
        xor eax, ebx
        mov ebp, dword ptr ds : [ecx+0x38]
        and eax, edi
        xor eax, edx
        add eax, ebp
        add esi, eax
        rol esi, 0xB
        mov eax, edi
        xor eax, ebx
        mov ebp, dword ptr ds : [ecx+0x3C]
        and eax, esi
        xor eax, ebx
        add eax, ebp
        add edx, eax
        rol edx, 0x13
        mov eax, esi
        or eax, edx
        mov ebp, esi
        and eax, edi
        and ebp, edx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx]
        add eax, ebp
        mov ebp, edx
        add eax, 0x5A827999
        add ebx, eax
        mov eax, edx
        rol ebx, 3
        or eax, ebx
        and ebp, ebx
        and eax, esi
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x10]
        add edi, ebp
        add eax, 0x5A827999
        add edi, eax
        rol edi, 5
        mov eax, edi
        mov ebp, edi
        or eax, ebx
        and ebp, ebx
        and eax, edx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x20]
        add eax, ebp
        mov ebp, edi
        add eax, 0x5A827999
        add esi, eax
        mov eax, edi
        rol esi, 9
        or eax, esi
        and ebp, esi
        and eax, ebx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x30]
        add eax, ebp
        mov ebp, esi
        add eax, 0x5A827999
        add edx, eax
        mov eax, esi
        rol edx, 0xD
        or eax, edx
        and ebp, edx
        and eax, edi
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+4]
        add eax, ebp
        mov ebp, edx
        add eax, 0x5A827999
        add ebx, eax
        mov eax, edx
        rol ebx, 3
        or eax, ebx
        and eax, esi
        and ebp, ebx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x14]
        add edi, ebp
        add eax, 0x5A827999
        add edi, eax
        rol edi, 5
        mov eax, edi
        mov ebp, edi
        or eax, ebx
        and ebp, ebx
        and eax, edx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x24]
        add eax, ebp
        mov ebp, edi
        add eax, 0x5A827999
        add esi, eax
        mov eax, edi
        rol esi, 9
        or eax, esi
        and ebp, esi
        and eax, ebx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x34]
        add eax, ebp
        mov ebp, esi
        add eax, 0x5A827999
        add edx, eax
        mov eax, esi
        rol edx, 0xD
        or eax, edx
        and ebp, edx
        and eax, edi
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+8]
        add eax, ebp
        mov ebp, edx
        add eax, 0x5A827999
        add ebx, eax
        mov eax, edx
        rol ebx, 3
        or eax, ebx
        and ebp, ebx
        and eax, esi
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x18]
        add edi, ebp
        add eax, 0x5A827999
        add edi, eax
        rol edi, 5
        mov eax, edi
        mov ebp, edi
        or eax, ebx
        and ebp, ebx
        and eax, edx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x28]
        add esi, ebp
        add eax, 0x5A827999
        add esi, eax
        rol esi, 9
        mov eax, edi
        mov ebp, edi
        or eax, esi
        and ebp, esi
        and eax, ebx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x38]
        add eax, ebp
        mov ebp, esi
        add eax, 0x5A827999
        add edx, eax
        mov eax, esi
        rol edx, 0xD
        or eax, edx
        and ebp, edx
        and eax, edi
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0xC]
        add eax, ebp
        mov ebp, edx
        add eax, 0x5A827999
        add ebx, eax
        mov eax, edx
        rol ebx, 3
        or eax, ebx
        and ebp, ebx
        and eax, esi
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x1C]
        add edi, ebp
        add eax, 0x5A827999
        add edi, eax
        rol edi, 5
        mov eax, edi
        mov ebp, edi
        or eax, ebx
        and ebp, ebx
        and eax, edx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x2C]
        add eax, ebp
        mov ebp, edi
        add eax, 0x5A827999
        add esi, eax
        mov eax, edi
        rol esi, 9
        or eax, esi
        and ebp, esi
        and eax, ebx
        or eax, ebp
        mov ebp, dword ptr ds : [ecx+0x3C]
        add eax, ebp
        mov ebp, dword ptr ds : [ecx]
        add eax, 0x5A827999
        add edx, eax
        mov eax, edi
        rol edx, 0xD
        xor eax, esi
        mov ebp, dword ptr ds : [ecx]
        xor eax, edx
        add eax, ebp
        add ebx, 0x6ED9EBA1
        add ebx, eax
        mov eax, esi
        rol ebx, 3
        xor eax, edx
        mov ebp, dword ptr ds : [ecx+0x20]
        xor eax, ebx
        add eax, ebp
        add edi, 0x6ED9EBA1
        add edi, eax
        rol edi, 9
        mov eax, edi
        mov ebp, dword ptr ds : [ecx+0x10]
        xor eax, edx
        add esi, 0x6ED9EBA1
        xor eax, ebx
        add eax, ebp
        mov ebp, ebx
        add esi, eax
        mov eax, edi
        rol esi, 0xB
        xor eax, esi
        add edx, dword ptr ds : [ecx+0x30]
        xor ebp, eax
        add edx, 0x6ED9EBA1
        add edx, ebp
        rol edx, 0xF
        mov ebp, edx
        xor ebp, eax
        mov eax, dword ptr ds : [ecx+8]
        add ebp, eax
        mov eax, esi
        add ebp, 0x6ED9EBA1
        xor eax, edx
        add ebx, ebp
        rol ebx, 3
        mov ebp, dword ptr ds : [ecx+0x28]
        xor eax, ebx
        add edi, 0x6ED9EBA1
        add eax, ebp
        add edi, eax
        rol edi, 9
        mov ebp, dword ptr ds : [ecx+0x18]
        mov eax, edi
        xor eax, edx
        xor eax, ebx
        add esi, 0x6ED9EBA1
        add eax, ebp
        mov ebp, ebx
        add esi, eax
        mov eax, edi
        rol esi, 0xB
        xor eax, esi
        add edx, dword ptr ds : [ecx+0x38]
        xor ebp, eax
        add edx, 0x6ED9EBA1
        add edx, ebp
        rol edx, 0xF
        mov ebp, edx
        xor ebp, eax
        mov eax, dword ptr ds : [ecx+4]
        add ebx, 0x6ED9EBA1
        add ebp, eax
        mov eax, esi
        add ebx, ebp
        rol ebx, 3
        xor eax, edx
        mov ebp, dword ptr ds : [ecx+0x24]
        xor eax, ebx
        add edi, 0x6ED9EBA1
        add eax, ebp
        add edi, eax
        rol edi, 9
        mov eax, edi
        xor eax, edx
        mov ebp, dword ptr ds : [ecx+0x14]
        xor eax, ebx
        add esi, 0x6ED9EBA1
        add eax, ebp
        mov ebp, ebx
        add esi, eax
        mov eax, edi
        rol esi, 0xB
        add edx, dword ptr ds : [ecx+0x34]
        xor eax, esi
        add edx, 0x6ED9EBA1
        xor ebp, eax
        add edx, ebp
        rol edx, 0xF
        mov ebp, edx
        xor ebp, eax
        mov eax, dword ptr ds : [ecx+0xC]
        add ebx, 0x6ED9EBA1
        add ebp, eax
        mov eax, esi
        add ebx, ebp
        xor eax, edx
        mov ebp, dword ptr ds : [ecx+0x2C]
        rol ebx, 3
        xor eax, ebx
        add edi, 0x6ED9EBA1
        add eax, ebp
        mov ebp, dword ptr ds : [ecx+0x1C]
        add edi, eax
        rol edi, 9
        mov eax, edi
        xor eax, edx
        xor eax, ebx
        add esi, 0x6ED9EBA1
        add eax, ebp
        add esi, eax
        mov eax, edi
        rol esi, 0xB
        xor eax, ebx
        mov ebp, dword ptr ds : [ecx+0x3C]
        xor eax, esi
        add edx, 0x6ED9EBA1
        add eax, ebp
        add edx, eax
        mov eax, dword ptr ss : [esp+0x14]
        rol edx, 0xF
        mov ecx, dword ptr ds : [eax]
        add ebx, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], ebx
        add edx, ecx
        mov ecx, dword ptr ds : [eax+8]
        add esi, ecx
        pop ebp
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax+4], edx
        add edi, ecx
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6acef00)
    }
}
