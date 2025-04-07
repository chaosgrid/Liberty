#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0fea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f171a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faafe9);

#define public_6eb98a0 _public_6eb98a0
#define public_6eb9922 _public_6eb9922
#define public_6eb9940 _public_6eb9940
#define public_6eb994b _public_6eb994b
#define public_6eb9953 _public_6eb9953
#define public_6eb995d _public_6eb995d
#define public_6eb9964 _public_6eb9964
#define public_6eb996c _public_6eb996c

PROC_DECLARE(0x6eb9870, internal_6eb9870, public_6eb9870);
extern "C" NAKED register_t __cdecl internal_6eb9870()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faafe9 @0x6eb9878*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faafe9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+0x2E8], 1
        jne public_6eb98a0
        mov dword ptr ds : [edi+0x2E8], 0x412
        public_6eb98a0 : nop
        xor ebx, ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov eax, dword ptr ds : [edi+0x2E8]
        push eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_6fb3038]
        push 1
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ds:[edi+0xC]
        push edx
        call dword ptr ds : [public_6fb369c]
        mov eax, dword ptr ds : [edi+0xA8]
        mov esi, dword ptr ds : [eax]
        add esp, 0x10
        cmp esi, eax
        je public_6eb996c
        public_6eb9922 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push 1
        call public_6f33fd0
        mov eax, dword ptr ds : [esi+8]
        cmp byte ptr ds : [eax+0x15], bl
        jne public_6eb994b
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x15], bl
        jne public_6eb9964
        lea ecx, ds:[ecx]
        public_6eb9940 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x15], bl
        je public_6eb9940
        jmp public_6eb9964
        public_6eb994b : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eb995d
        public_6eb9953 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6eb9953
        public_6eb995d : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6eb9964
        mov esi, eax
        public_6eb9964 : nop
        cmp esi, dword ptr ds : [edi+0xA8]
        jne public_6eb9922
        public_6eb996c : nop
        mov ecx, edi
        call public_6f171a0
        mov ecx, edi
        call public_6f0fea0
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6eb9870)
    }
}

#undef public_6eb98a0
#undef public_6eb9922
#undef public_6eb9940
#undef public_6eb994b
#undef public_6eb9953
#undef public_6eb995d
#undef public_6eb9964
#undef public_6eb996c
