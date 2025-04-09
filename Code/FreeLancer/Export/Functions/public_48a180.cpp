#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_48a180);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc2c2);

#define public_48a220 _public_48a220
#define public_48a237 _public_48a237
#define public_48a23e _public_48a23e
#define public_48a2a8 _public_48a2a8
#define public_48a2ba _public_48a2ba
#define public_48a2c9 _public_48a2c9
#define public_48a305 _public_48a305
#define public_48a347 _public_48a347

PROC_DECLARE(0x48a180, internal_48a180, public_48a180);
extern "C" NAKED register_t __cdecl internal_48a180()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc2c2 @0x48a182*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc2c2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        mov eax, dword ptr ss : [esp+0x34]
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [public_671f78], eax
        mov dword ptr ds : [public_671f74], edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x44], ebx
        call public_4c4060
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6190]
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov byte ptr ss : [esp+0x3C], 1
        je public_48a23e
        mov ebp, dword ptr ds : [public_5c632c]
        mov edi, edi
        public_48a220 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call ebp
        add esp, 4
        cmp eax, edi
        je public_48a237
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x14]
        jne public_48a220
        jmp public_48a23e
        public_48a237 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x44], ecx
        public_48a23e : nop
        push 0x51E
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c633c]
/*FIXUP push offset public_671f74 @0x48a24d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671f74
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c63dc]
        mov esi, dword ptr ds : [public_5c63d8]
        push 0x3CA
        lea ecx, ss:[esp+0x20]
        call esi
        mov edx, dword ptr ss : [esp+0x44]
        push edx
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c63d4]
        push 0x3CB
        lea ecx, ss:[esp+0x20]
        call esi
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6338]
        mov edi, dword ptr ds : [public_671ff4]
        cmp edi, ebx
        je public_48a2c9
        mov byte ptr ds : [public_67dcc8], bl
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_48a2ba
        public_48a2a8 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_48a2a8
        public_48a2ba : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_48a2c9 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_671f98
        call dword ptr ds : [public_5c628c]
        push ebx
        push ebx
/*FIXUP push offset public_5d0234 @0x48a2db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
/*FIXUP push offset public_5d0234 @0x48a2e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        mov dword ptr ds : [public_671ff8], 4
        call public_59db20
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [edi]
        add esp, 0x10
        cmp esi, edi
        mov byte ptr ss : [esp+0x3C], bl
        je public_48a347
        public_48a305 : nop
        push ebx
        lea ecx, ss:[esp+0x4C]
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], eax
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], ecx
        jne public_48a305
        mov edi, dword ptr ss : [esp+0x14]
        public_48a347 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6098]
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x48a180)
    }
}

#undef public_48a220
#undef public_48a237
#undef public_48a23e
#undef public_48a2a8
#undef public_48a2ba
#undef public_48a2c9
#undef public_48a305
#undef public_48a347
