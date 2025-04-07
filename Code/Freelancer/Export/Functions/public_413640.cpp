#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413640);
CLANG_FORWARD_PROC_SYMBOL(public_418c20);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_413650 _public_413650
#define public_413680 _public_413680
#define public_41369f _public_41369f
#define public_4136c4 _public_4136c4
#define public_4136c8 _public_4136c8
#define public_4136e8 _public_4136e8

PROC_DECLARE(0x413640, internal_413640, public_413640);
extern "C" NAKED register_t __cdecl internal_413640()
{
    __asm
    {
        mov ecx, offset public_616524
        jmp public_413650
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_413650 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_4136c4
        mov ecx, eax
        cmp eax, ecx
        jne public_4136c4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_41369f
        nop 
        lea esp, ss:[esp]
        public_413680 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_418c20
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_413680
        public_41369f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_53e430
        jmp public_4136e8
        public_4136c4 : nop
        cmp eax, edi
        je public_4136e8
        public_4136c8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_52afa0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_4136c8
        public_4136e8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x413640)
    }
}

#undef public_413650
#undef public_413680
#undef public_41369f
#undef public_4136c4
#undef public_4136c8
#undef public_4136e8
