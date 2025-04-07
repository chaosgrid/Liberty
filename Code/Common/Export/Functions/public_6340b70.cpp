#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340b70);

#define public_6340b90 _public_6340b90
#define public_6340b9e _public_6340b9e
#define public_6340bab _public_6340bab
#define public_6340bb5 _public_6340bb5
#define public_6340bc1 _public_6340bc1
#define public_6340bca _public_6340bca

PROC_DECLARE(0x6340b70, internal_6340b70, public_6340b70);
extern "C" NAKED register_t __cdecl internal_6340b70()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0xB9]
        test al, al
        jne public_6340bab
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xB9]
        test bl, bl
        jne public_6340b9e
        lea ecx, ds:[ecx]
        public_6340b90 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xB9]
        test bl, bl
        je public_6340b90
        public_6340b9e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6340bab : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6340bc1
        public_6340bb5 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6340bb5
        public_6340bc1 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6340bca
        mov dword ptr ds : [ecx], eax
        public_6340bca : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6340b70)
    }
}

#undef public_6340b90
#undef public_6340b9e
#undef public_6340bab
#undef public_6340bb5
#undef public_6340bc1
#undef public_6340bca
