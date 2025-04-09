#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b0060);

#define public_5b00a0 _public_5b00a0
#define public_5b00b5 _public_5b00b5
#define public_5b00c6 _public_5b00c6
#define public_5b00c8 _public_5b00c8

PROC_DECLARE(0x5b0060, internal_5b0060, public_5b0060);
extern "C" NAKED register_t __cdecl internal_5b0060()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push ebx
        call esi
        add esp, 8
        test al, al
        je public_5b00a0
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push edi
        call esi
        add esp, 8
        test al, al
        jne public_5b00c6
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        push ebx
        call esi
        add esp, 8
        test al, al
        mov eax, edi
        jne public_5b00c8
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_5b00a0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push ebx
        call esi
        add esp, 8
        test al, al
        je public_5b00b5
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_5b00b5 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        push ebx
        push edi
        call esi
        add esp, 8
        test al, al
        mov eax, ebx
        jne public_5b00c8
        public_5b00c6 : nop
        mov eax, edi
        public_5b00c8 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5b0060)
    }
}

#undef public_5b00a0
#undef public_5b00b5
#undef public_5b00c6
#undef public_5b00c8
