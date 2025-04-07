#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42aae0);
CLANG_FORWARD_PROC_SYMBOL(public_42c370);
CLANG_FORWARD_PROC_SYMBOL(public_42c750);
CLANG_FORWARD_PROC_SYMBOL(public_42cbc0);
CLANG_FORWARD_PROC_SYMBOL(public_438930);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42aaf0 _public_42aaf0
#define public_42ab20 _public_42ab20
#define public_42ab48 _public_42ab48
#define public_42ab6d _public_42ab6d
#define public_42ab71 _public_42ab71
#define public_42ab91 _public_42ab91

PROC_DECLARE(0x42aae0, internal_42aae0, public_42aae0);
extern "C" NAKED register_t __cdecl internal_42aae0()
{
    __asm
    {
        mov ecx, offset public_667cc0
        jmp public_42aaf0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_42aaf0 : nop
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
        je public_42ab6d
        mov ecx, eax
        cmp eax, ecx
        jne public_42ab6d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_42ab48
        nop 
        lea esp, ss:[esp]
        public_42ab20 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_42c750
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_42cbc0
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_42ab20
        public_42ab48 : nop
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
        jmp public_42ab91
        public_42ab6d : nop
        cmp eax, edi
        je public_42ab91
        public_42ab71 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_438930
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_42c370
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_42ab71
        public_42ab91 : nop
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
        UNREACHABLE_TRAP(0x42aae0)
    }
}

#undef public_42aaf0
#undef public_42ab20
#undef public_42ab48
#undef public_42ab6d
#undef public_42ab71
#undef public_42ab91
