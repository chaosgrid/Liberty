#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_473770);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbb1a);

#define public_47380f _public_47380f
#define public_47384a _public_47384a
#define public_47388d _public_47388d
#define public_4738a1 _public_4738a1
#define public_4738bc _public_4738bc
#define public_4738c8 _public_4738c8

PROC_DECLARE(0x473770, internal_473770, public_473770);
extern "C" NAKED register_t __cdecl internal_473770()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbb1a @0x473772*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbb1a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov eax, dword ptr ds : [ecx+0x340]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+4], ecx
        je public_4738c8
        cmp dword ptr ss : [esp+0x2C], ebx
        je public_4738c8
        mov al, byte ptr ss : [esp+0x2C]
        push ebp
        push esi
        push edi
        push 0xC
        mov byte ptr ss : [esp+0x20], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebx
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x30], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov byte ptr ss : [esp+0x34], 2
        mov ebp, eax
        call public_5b7e84
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], ebp
        jne public_47380f
        mov edi, eax
        public_47380f : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x30], 1
        je public_47384a
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x3C], ebx
        public_47384a : nop
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x30], bl
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        call public_57da40
        add esp, 8
        test al, al
        je public_47388d
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x340]
        call public_57b370
        mov ecx, dword ptr ds : [esi+0x340]
        lea edx, ss:[esp+0x1C]
        push edx
        call public_57b3e0
        public_47388d : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov edi, eax
        je public_4738bc
        public_4738a1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_46d680
        cmp esi, edi
        jne public_4738a1
        mov eax, dword ptr ss : [esp+0x20]
        public_4738bc : nop
        push eax
        call public_5b7e1d
        add esp, 4
        pop edi
        pop esi
        pop ebp
        public_4738c8 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x473770)
    }
}

#undef public_47380f
#undef public_47384a
#undef public_47388d
#undef public_4738a1
#undef public_4738bc
#undef public_4738c8
