#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7190);

#define public_6eb71b6 _public_6eb71b6

PROC_DECLARE(0x6eb7190, internal_6eb7190, public_6eb7190);
extern "C" NAKED register_t __cdecl internal_6eb7190()
{
    __asm
    {
        mov eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        xor edx, edx
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [esi+0x3C]
        push edi
        mov dword ptr ds : [eax+0x10], ecx
        lea ecx, ds:[eax+0x14]
        mov edi, 8
        public_6eb71b6 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ecx+0x10], edx
        mov byte ptr ds : [ecx+0x14], dl
        mov byte ptr ds : [ecx+0x15], dl
        add ecx, 0x18
        dec edi
        jne public_6eb71b6
        add esi, 8
        lea edi, ds:[eax+0xD4]
        mov ecx, 0xD
        rep movsd
        mov cl, byte ptr ss : [esp+0xC]
        pop edi
        mov byte ptr ds : [eax+0x108], cl
        mov dword ptr ds : [eax+0x10C], edx
        mov dword ptr ds : [eax+0x110], edx
        mov dword ptr ds : [eax+0x114], edx
        mov dword ptr ds : [eax], offset public_6fb464c
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb7190)
    }
}

#undef public_6eb71b6
