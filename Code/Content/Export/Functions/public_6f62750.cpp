#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6f62750);
CLANG_FORWARD_PROC_SYMBOL(public_6f68ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f767c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafc88);

#define public_6f62790 _public_6f62790
#define public_6f627a1 _public_6f627a1
#define public_6f627b9 _public_6f627b9
#define public_6f627bf _public_6f627bf
#define public_6f627f7 _public_6f627f7
#define public_6f62802 _public_6f62802
#define public_6f62843 _public_6f62843
#define public_6f6285e _public_6f6285e

PROC_DECLARE(0x6f62750, internal_6f62750, public_6f62750);
extern "C" NAKED register_t __cdecl internal_6f62750()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
/*FIXUP push public_6fafc88 @0x6f6275c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafc88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        call public_6f767c0
        mov ebx, eax
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6f6285e
        mov ebp, dword ptr ss : [esp+0x34]
        xor edi, edi
        lea esp, ss:[esp]
        public_6f62790 : nop
        mov al, byte ptr ds : [esi]
        mov byte ptr ss : [esp+0x10], al
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_6f627a1
        xor eax, eax
        jmp public_6f627b9
        public_6f627a1 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f627b9 : nop
        cmp eax, edi
        jge public_6f627bf
        xor eax, eax
        public_6f627bf : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        call public_6f30960
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, eax
        mov dword ptr ss : [esp+0x28], edi
        mov ecx, edx
        je public_6f62802
        public_6f627f7 : nop
        cmp dword ptr ds : [ecx], ebp
        je public_6f62843
        add ecx, 0x44
        cmp ecx, eax
        jne public_6f627f7
        public_6f62802 : nop
        push edx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esi, 0x98
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        jne public_6f62790
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6f62843 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        lea edx, ss:[esp+0x10]
        push edx
        call public_6f68ac0
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f6285e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f62750)
    }
}

#undef public_6f62790
#undef public_6f627a1
#undef public_6f627b9
#undef public_6f627bf
#undef public_6f627f7
#undef public_6f62802
#undef public_6f62843
#undef public_6f6285e
