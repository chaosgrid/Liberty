#include "Common-PCH.h"


#define public_62fa8b1 _public_62fa8b1
#define public_62fa8d4 _public_62fa8d4
#define public_62fa8e1 _public_62fa8e1
#define public_62fa8f0 _public_62fa8f0
#define public_62fa8fa _public_62fa8fa
#define public_62fa901 _public_62fa901
#define public_62fa909 _public_62fa909

PROC_DECLARE(0x62fa8a0, internal_62fa8a0, public_62fa8a0);
extern "C" NAKED register_t __cdecl internal_62fa8a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fca9c]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_62fa909
        mov edi, dword ptr ss : [esp+0xC]
        public_62fa8b1 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax]
        test al, al
        je public_62fa909
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62fa8e1
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62fa901
        public_62fa8d4 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_62fa8d4
        jmp public_62fa901
        public_62fa8e1 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62fa8fa
        lea esp, ss:[esp]
        public_62fa8f0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62fa8f0
        public_62fa8fa : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62fa901
        mov esi, eax
        public_62fa901 : nop
        cmp esi, dword ptr ds : [public_63fca9c]
        jne public_62fa8b1
        public_62fa909 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62fa8a0)
    }
}

#undef public_62fa8b1
#undef public_62fa8d4
#undef public_62fa8e1
#undef public_62fa8f0
#undef public_62fa8fa
#undef public_62fa901
#undef public_62fa909
