#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4252d0);
CLANG_FORWARD_PROC_SYMBOL(public_425480);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_4cdc10);
CLANG_FORWARD_PROC_SYMBOL(public_4f4a10);
CLANG_FORWARD_PROC_SYMBOL(public_52e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_532bc0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_5485c0);
CLANG_FORWARD_PROC_SYMBOL(public_548a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1070);

#define public_548bf0 _public_548bf0
#define public_548bf2 _public_548bf2
#define public_548c2c _public_548c2c
#define public_548c2e _public_548c2e
#define public_548d1f _public_548d1f
#define public_548d87 _public_548d87

PROC_DECLARE(0x548a20, internal_548a20, public_548a20);
extern "C" NAKED register_t __cdecl internal_548a20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1070 @0x548a22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1070
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD08
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xD20]
        push esi
        push edi
        lea eax, ss:[esp+0x110]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_5c6674]
        xor ebx, ebx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x10], ebx
        call public_52e0a0
        or esi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x80], esi
        call public_4cdc10
        lea ecx, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0xB8], ebx
        call dword ptr ds : [public_5c6a38]
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0xD24], ebx
        call dword ptr ds : [public_5c6a34]
        mov edi, dword ptr ds : [public_5c6030]
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0xD20], 1
        call edi
        lea ecx, ss:[esp+0xE0]
        mov byte ptr ss : [esp+0xDC], bl
        call edi
        lea ecx, ss:[esp+0xEC]
        mov byte ptr ss : [esp+0xE4], bl
        mov byte ptr ss : [esp+0xE5], bl
        mov dword ptr ss : [esp+0xE8], ebx
        call edi
        lea edx, ss:[esp+0x16]
        push edx
        lea ecx, ss:[esp+0x108]
        mov dword ptr ss : [esp+0xF4], ebx
        mov dword ptr ss : [esp+0xF8], ebx
        mov dword ptr ss : [esp+0xFC], ebx
        mov dword ptr ss : [esp+0x100], ebx
        mov dword ptr ss : [esp+0x104], ebx
        call public_46ba60
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebp
        mov dword ptr ss : [esp+0xD2C], 2
        call dword ptr ds : [public_5c6b34]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [public_613ed0]
        add esp, 0xC
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], edx
        je public_548d1f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        push 0x208
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0xD20], 3
        je public_548bf0
        push 2
        mov ecx, esi
        call public_532bc0
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov byte ptr ds : [esi+0xEC], bl
        mov eax, 0x3F800000
        mov byte ptr ds : [esi+0x1F0], 1
        lea ecx, ds:[esi+0x200]
        mov byte ptr ss : [esp+0xD20], 4
        mov dword ptr ds : [esi+0x1F4], eax
        mov dword ptr ds : [esi+0x1F8], eax
        mov dword ptr ds : [esi+0x1FC], eax
        call edi
        mov dword ptr ds : [esi+0x204], ebx
        mov dword ptr ds : [esi], offset public_5e0304
        mov dword ptr ds : [esi+4], offset public_5e0284
        mov dword ptr ds : [esi+0xC], offset public_5e0278
        mov dword ptr ds : [esi+0xAC], offset public_5e0270
        jmp public_548bf2
        public_548bf0 : nop
        xor esi, esi
        public_548bf2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0xD24], 2
        call dword ptr ds : [edx+0x168]
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_548c2c
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_548c2c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_548c2c
        mov ecx, eax
        jmp public_548c2e
        public_548c2c : nop
        xor ecx, ecx
        public_548c2e : nop
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [public_5c65cc]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x20]
        lea eax, ss:[esp+0xBC]
        push 1
        push eax
        call public_4252d0
        mov edx, dword ptr ds : [esi]
        add esp, 8
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        push eax
        call public_425480
        add esp, 4
        lea eax, ss:[esp+0x110]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_5c6670]
        push ebp
        mov ecx, esi
        call public_5485c0
        push ebx
        push esi
        call public_540c30
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        call dword ptr ds : [public_5c65c8]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x108]
        mov dword ptr ss : [esp+0xD24], 5
        call public_53e430
        mov edx, dword ptr ss : [esp+0x108]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x110]
        call public_4a2f80
        mov edx, dword ptr ss : [esp+0x108]
        push edx
        call public_5b7e1d
        add esp, 4
        mov dword ptr ss : [esp+0x108], ebx
        mov dword ptr ss : [esp+0x10C], ebx
        lea ecx, ss:[esp+0xCC]
        mov dword ptr ss : [esp+0xD20], 6
        call dword ptr ds : [public_5c63a8]
        lea ecx, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0xD20], 0xFFFFFFFF
        call dword ptr ds : [public_5c6a2c]
        mov al, 1
        jmp public_548d87
        public_548d1f : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x108]
        mov dword ptr ss : [esp+0xD24], 7
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x108]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x110]
        call public_4a2f80
        mov ecx, dword ptr ss : [esp+0x108]
        push ecx
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x108], ebx
        mov dword ptr ss : [esp+0x10C], ebx
        mov dword ptr ss : [esp+0xD20], esi
        call public_4f4a10
        xor al, al
        public_548d87 : nop
        mov ecx, dword ptr ss : [esp+0xD18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xD14
        ret 
        UNREACHABLE_TRAP(0x548a20)
    }
}

#undef public_548bf0
#undef public_548bf2
#undef public_548c2c
#undef public_548c2e
#undef public_548d1f
#undef public_548d87
