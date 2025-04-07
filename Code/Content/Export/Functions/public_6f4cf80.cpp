#include "Content-PCH.h"


#define public_6f4cfa0 _public_6f4cfa0
#define public_6f4cfd0 _public_6f4cfd0
#define public_6f4cfdd _public_6f4cfdd
#define public_6f4cfe5 _public_6f4cfe5
#define public_6f4cfef _public_6f4cfef
#define public_6f4cff6 _public_6f4cff6
#define public_6f4d000 _public_6f4d000

PROC_DECLARE(0x6f4cf80, internal_6f4cf80, public_6f4cf80);
extern "C" NAKED register_t __cdecl internal_6f4cf80()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x210]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f4d000
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        lea ebx, ds:[ebx]
        public_6f4cfa0 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edi]
        push ecx
        push 0
        push ebx
        push ebp
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0xA4]
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f4cfdd
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f4cff6
        lea esp, ss:[esp]
        public_6f4cfd0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6f4cfd0
        jmp public_6f4cff6
        public_6f4cfdd : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4cfef
        public_6f4cfe5 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6f4cfe5
        public_6f4cfef : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6f4cff6
        mov esi, eax
        public_6f4cff6 : nop
        cmp esi, dword ptr ds : [edi+0x210]
        jne public_6f4cfa0
        pop ebp
        pop ebx
        public_6f4d000 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6f4cf80)
    }
}

#undef public_6f4cfa0
#undef public_6f4cfd0
#undef public_6f4cfdd
#undef public_6f4cfe5
#undef public_6f4cfef
#undef public_6f4cff6
#undef public_6f4d000
