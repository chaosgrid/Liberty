#include "Common-PCH.h"


#define public_6333a17 _public_6333a17
#define public_6333a5b _public_6333a5b

PROC_DECLARE(0x6333a00, internal_6333a00, public_6333a00);
extern "C" NAKED register_t __cdecl internal_6333a00()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_6333a5b
        push ebp
        push edi
        lea edi, ds:[esi+4]
        mov ebp, offset public_63a4998
        public_6333a17 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 2
        mov dword ptr ss : [esp+0x14], ebp
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [edi], edx
        mov byte ptr ds : [esi+0xC], 0
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x1C], ebp
        call dword ptr ds : [eax+8]
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        jne public_6333a17
        pop edi
        pop ebp
        public_6333a5b : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6333a00)
    }
}

#undef public_6333a17
#undef public_6333a5b
