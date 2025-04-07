#include "Common-PCH.h"


#define public_6313f65 _public_6313f65
#define public_6313f95 _public_6313f95
#define public_6313fa2 _public_6313fa2
#define public_6313fb0 _public_6313fb0
#define public_6313fba _public_6313fba
#define public_6313fc3 _public_6313fc3

PROC_DECLARE(0x6313f50, internal_6313f50, public_6313f50);
extern "C" NAKED register_t __cdecl internal_6313f50()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], ecx
        public_6313f65 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        cmp esi, dword ptr ds : [ecx+8]
        je public_6313fc3
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        lea edx, ds:[esi+0x10]
        push edx
        push eax
        call ebx
        add esp, 0xC
        test al, al
        je public_6313fc3
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x61]
        test cl, cl
        jne public_6313fa2
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x61]
        test cl, cl
        jne public_6313f65
        public_6313f95 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x61]
        test cl, cl
        je public_6313f95
        jmp public_6313f65
        public_6313fa2 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6313fba
        lea ebx, ds:[ebx]
        public_6313fb0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6313fb0
        public_6313fba : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6313f65
        mov esi, eax
        jmp public_6313f65
        public_6313fc3 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6313f50)
    }
}

#undef public_6313f65
#undef public_6313f95
#undef public_6313fa2
#undef public_6313fb0
#undef public_6313fba
#undef public_6313fc3
