#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6343fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6356a40);
CLANG_FORWARD_PROC_SYMBOL(public_6356a70);
CLANG_FORWARD_PROC_SYMBOL(public_636ded0);
CLANG_FORWARD_PROC_SYMBOL(public_636e030);
CLANG_FORWARD_PROC_SYMBOL(public_6378a10);
CLANG_FORWARD_PROC_SYMBOL(public_6379b50);
CLANG_FORWARD_PROC_SYMBOL(public_637a240);
CLANG_FORWARD_PROC_SYMBOL(public_637a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_637a330);
CLANG_FORWARD_PROC_SYMBOL(public_637a6a0);
CLANG_FORWARD_PROC_SYMBOL(public_637a750);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639893b);

#define public_636df17 _public_636df17
#define public_636df19 _public_636df19
#define public_636df48 _public_636df48
#define public_636df69 _public_636df69
#define public_636df72 _public_636df72
#define public_636df80 _public_636df80
#define public_636e00b _public_636e00b

PROC_DECLARE(0x636ded0, internal_636ded0, public_636ded0);
extern "C" NAKED register_t __cdecl internal_636ded0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639893b @0x636ded2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639893b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        push 0x10
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x50], ebp
        je public_636df17
        push ebp
        push 8
        push 0x1F4
        mov ecx, eax
        call public_6356a40
        jmp public_636df19
        public_636df17 : nop
        xor eax, eax
        public_636df19 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_6379b50
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edx+0x18]
        cmp edi, ebp
        mov ebx, eax
        je public_636df48
        mov ecx, edi
        call public_6356a70
        push edi
        call public_6391d5a
        add esp, 4
        public_636df48 : nop
        cmp ebx, ebp
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], ebp
        je public_636df69
        pop edi
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        public_636df69 : nop
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ecx+0x30]
        cmp edi, ebp
        je public_636df80
        public_636df72 : nop
        mov ecx, edi
        call public_6378a10
        mov edi, dword ptr ds : [edi+4]
        cmp edi, ebp
        jne public_636df72
        public_636df80 : nop
        mov ecx, dword ptr ds : [esi]
        call public_637a240
        mov word ptr ss : [esp+0x10], bp
        mov word ptr ss : [esp+0x12], bp
        mov dword ptr ss : [esp+0x14], ebp
        lea edx, ss:[esp+0x10]
        mov ebx, 1
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], ebx
        call public_636e030
        lea ecx, ss:[esp+0x18]
        call public_637a2e0
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x54], 2
        call public_637a330
        push 0x10
        push eax
        call public_6343fc0
        add esp, 8
        mov edi, eax
        push edi
        lea ecx, ss:[esp+0x1C]
        call public_637a6a0
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x50], bl
        call public_637a750
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x18]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        je public_636e00b
        cmp eax, ebp
        je public_636e00b
        push eax
        call public_6343fb0
        add esp, 4
        public_636e00b : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x636ded0)
    }
}

#undef public_636df17
#undef public_636df19
#undef public_636df48
#undef public_636df69
#undef public_636df72
#undef public_636df80
#undef public_636e00b
