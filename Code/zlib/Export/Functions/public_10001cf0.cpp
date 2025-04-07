#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001cf0);

#define public_10001d00 _public_10001d00
#define public_10001d52 _public_10001d52

PROC_DECLARE(0x10001cf0, internal_10001cf0, public_10001cf0);
extern "C" NAKED register_t __cdecl internal_10001cf0()
{
    __asm
    {
        mov ecx, dword ptr ds : [eax+0x10]
        push esi
        mov esi, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [esi+0x14]
        cmp edx, ecx
        jbe public_10001d00
        mov edx, ecx
        public_10001d00 : nop
        test edx, edx
        je public_10001d52
        mov esi, dword ptr ds : [esi+0x10]
        push ebx
        push edi
        mov edi, dword ptr ds : [eax+0xC]
        mov ecx, edx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+0x1C]
        add edi, edx
        mov dword ptr ds : [eax+0xC], edi
        add dword ptr ds : [ecx+0x10], edx
        mov ebx, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+0x1C]
        add ebx, edx
        mov dword ptr ds : [eax+0x14], ebx
        sub edi, edx
        mov dword ptr ds : [eax+0x10], edi
        sub dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [eax+0x14]
        test ecx, ecx
        pop edi
        pop ebx
        jne public_10001d52
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [eax+0x10], ecx
        public_10001d52 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10001cf0)
    }
}

#undef public_10001d00
#undef public_10001d52
