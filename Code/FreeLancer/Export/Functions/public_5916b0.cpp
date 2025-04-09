#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_5916b0);
CLANG_FORWARD_PROC_SYMBOL(public_594b90);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4964);

#define public_5916f2 _public_5916f2
#define public_591792 _public_591792
#define public_591893 _public_591893
#define public_59189c _public_59189c
#define public_5918d6 _public_5918d6
#define public_5918d8 _public_5918d8

PROC_DECLARE(0x5916b0, internal_5916b0, public_5916b0);
extern "C" NAKED register_t __cdecl internal_5916b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4964 @0x5916b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4964
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD4
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0xEC]
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        push edi
        mov al, 1
        je public_5918d8
        cmp dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x10], ecx
        je public_5918d8
        public_5916f2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0xF8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x3C], esi
        call public_59db20
        mov ebp, eax
        add esp, 0x10
        cmp ebp, ebx
        je public_5918d6
        mov eax, dword ptr ds : [public_67d96c]
        fld dword ptr ds : [esi+0x10]
        cmp eax, ebx
        fstp dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x58], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x64], 0
        jne public_591792
        call public_5b73e0
        mov dword ptr ds : [public_67d96c], eax
        public_591792 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x100]
        push edx
        lea edx, ss:[esp+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp]
        mov ecx, 0xC
        lea esi, ss:[esp+0x84]
        lea edi, ss:[esp+0xB4]
        rep movsd
        lea ecx, ss:[esp+0xB4]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        mov esi, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ss : [esp+0x17]
        or ecx, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x1C], al
        xor eax, eax
        mov edi, edx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c7088]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0xF0], ebx
        call dword ptr ds : [public_5c6fa0]
        mov dword ptr ss : [esp+0x80], ebx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x70]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        add ecx, 4
        mov byte ptr ss : [esp+0xF4], 1
        call public_594b90
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x70]
        call public_46d660
        mov edi, dword ptr ss : [esp+0x68]
        push 1
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0xF0], bl
        call dword ptr ds : [public_5c7084]
        mov dword ptr ds : [edi+0x1C], ebp
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xEC], 0xFFFFFFFF
        je public_59189c
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_591893
        cmp cl, 0xFF
        je public_591893
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_59189c
        public_591893 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_59189c : nop
        mov ecx, dword ptr ss : [esp+0xFC]
        mov edx, dword ptr ds : [esi+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebp
        push edx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call public_5916b0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        add ecx, 4
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        jne public_5916f2
        jmp public_5918d8
        public_5918d6 : nop
        xor al, al
        public_5918d8 : nop
        mov ecx, dword ptr ss : [esp+0xE4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE0
        ret 0xC
        UNREACHABLE_TRAP(0x5916b0)
    }
}

#undef public_5916f2
#undef public_591792
#undef public_591893
#undef public_59189c
#undef public_5918d6
#undef public_5918d8
