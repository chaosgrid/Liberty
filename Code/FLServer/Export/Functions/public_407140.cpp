#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401290);
CLANG_FORWARD_PROC_SYMBOL(public_407330);
CLANG_FORWARD_PROC_SYMBOL(public_409800);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_41891e);
CLANG_FORWARD_PROC_SYMBOL(public_418924);
CLANG_FORWARD_PROC_SYMBOL(public_41892a);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_41898a);
CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_JUMP_SYMBOL(public_419dc1);

#define public_4071af _public_4071af
#define public_40727a _public_40727a
#define public_4072ba _public_4072ba
#define public_4072d4 _public_4072d4
#define public_4072e0 _public_4072e0
#define public_407306 _public_407306
#define public_407312 _public_407312

PROC_DECLARE(0x407140, internal_407140, public_407140);
extern "C" NAKED register_t __cdecl internal_407140()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_419dc1 @0x407148*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419dc1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x184
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x80]
        push 0x80
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        call public_409800
        mov eax, dword ptr ds : [edi+0xC0]
        push 0x80
        lea edx, ss:[esp+0x120]
        push edx
        push eax
        call public_409800
        mov esi, dword ptr ds : [public_41b8f4]
        lea ecx, ss:[esp+0x48]
        push ecx
        call esi
        add esp, 0x1C
        test eax, eax
        jne public_4071af
        mov ecx, edi
        call public_41898a
        jmp public_407312
        public_4071af : nop
        lea edx, ss:[esp+0x30]
        push edx
        call dword ptr ds : [public_41b8f8]
        mov al, byte ptr ss : [esp+0x13]
        xor ebx, ebx
        lea ecx, ss:[esp+0x34]
        push ecx
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call esi
        add esp, 8
        push eax
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_407330
        mov al, byte ptr ss : [esp+0xF]
        lea ecx, ss:[esp+0x110]
        push ecx
        mov dword ptr ss : [esp+0x19C], ebx
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        call esi
        add esp, 4
        push eax
        lea edx, ss:[esp+0x114]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_407330
        mov byte ptr ss : [esp+0x198], 1
        call public_40cdc0
        mov ecx, dword ptr ds : [public_41baf8]
        lea eax, ss:[esp+0x20]
        push eax
        call public_41892a
        cmp al, bl
        mov byte ptr ss : [esp+0xF], al
        je public_40727a
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        call public_418924
        mov dword ptr ds : [edi+0xE0], eax
        mov ecx, dword ptr ds : [public_41baf8]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call public_41891e
        mov ecx, edi
        call public_41898a
        public_40727a : nop
        call public_40ce70
        cmp byte ptr ss : [esp+0xF], bl
        jne public_4072ba
        push ebx
        lea ecx, ss:[esp+0xB4]
        call public_401290
        lea ecx, ss:[esp+0xB0]
        mov byte ptr ss : [esp+0x198], 2
        call public_41899c
        lea ecx, ss:[esp+0xB0]
        mov byte ptr ss : [esp+0x198], 1
        call public_418a98
        public_4072ba : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        je public_4072e0
        mov al, byte ptr ds : [ecx-1]
        cmp al, bl
        je public_4072d4
        cmp al, 0xFF
        je public_4072d4
        dec al
        mov byte ptr ds : [ecx-1], al
        jmp public_4072e0
        public_4072d4 : nop
        add ecx, 0xFFFFFFFE
        push ecx
        call public_418978
        add esp, 4
        public_4072e0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_407312
        mov al, byte ptr ds : [ecx-1]
        cmp al, bl
        je public_407306
        cmp al, 0xFF
        je public_407306
        dec al
        mov byte ptr ds : [ecx-1], al
        jmp public_407312
        public_407306 : nop
        add ecx, 0xFFFFFFFE
        push ecx
        call public_418978
        add esp, 4
        public_407312 : nop
        mov ecx, dword ptr ss : [esp+0x190]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x190
        ret 
        UNREACHABLE_TRAP(0x407140)
    }
}

#undef public_4071af
#undef public_40727a
#undef public_4072ba
#undef public_4072d4
#undef public_4072e0
#undef public_407306
#undef public_407312
