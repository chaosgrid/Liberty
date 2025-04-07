#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f34670);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f72a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f74620);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafff0);

#define public_6f72ab0 _public_6f72ab0
#define public_6f72ac4 _public_6f72ac4
#define public_6f72b31 _public_6f72b31
#define public_6f72b41 _public_6f72b41
#define public_6f72b5e _public_6f72b5e
#define public_6f72ba0 _public_6f72ba0
#define public_6f72bc3 _public_6f72bc3
#define public_6f72be5 _public_6f72be5
#define public_6f72c10 _public_6f72c10
#define public_6f72c19 _public_6f72c19

PROC_DECLARE(0x6f72a80, internal_6f72a80, public_6f72a80);
extern "C" NAKED register_t __cdecl internal_6f72a80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafff0 @0x6f72a88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafff0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xBC]
        mov ecx, dword ptr ds : [edi+0xC0]
        cmp eax, ecx
        je public_6f72ac4
        lea esp, ss:[esp]
        public_6f72ab0 : nop
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [edx+0x10]
        test esi, esi
        jne public_6f72c19
        add eax, 4
        cmp eax, ecx
        jne public_6f72ab0
        public_6f72ac4 : nop
        mov al, byte ptr ds : [edi+0xDC]
        lea esi, ds:[edi+0xDC]
        push ebx
        push 0xC
        mov byte ptr ss : [esp+0x24], al
        call public_6fa912a
        add esp, 4
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov ebx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], 0
        call public_6f1df30
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x24]
        mov esi, eax
        call public_6f1df30
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_6ed0230
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x44], 0
        je public_6f72b41
        public_6f72b31 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_6f34670
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x24]
        jne public_6f72b31
        public_6f72b41 : nop
        mov al, byte ptr ds : [edi+0x98]
        lea esi, ds:[edi+0x98]
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], al
        call public_6fa3db0
        test eax, eax
        jge public_6f72b5e
        xor eax, eax
        public_6f72b5e : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        push ecx
        push esi
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x3C], eax
        call public_6eed270
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], eax
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, eax
        mov byte ptr ss : [esp+0x44], 1
        je public_6f72bc3
        mov ebx, dword ptr ds : [public_6fb33c8]
        nop 
        public_6f72ba0 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push edx
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 8
        push eax
        mov ecx, edi
        call public_6f74620
        mov eax, dword ptr ss : [esp+0x34]
        add esi, 4
        cmp esi, eax
        jne public_6f72ba0
        mov esi, dword ptr ss : [esp+0x30]
        public_6f72bc3 : nop
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0xC], ecx
        pop ebx
        je public_6f72c10
        public_6f72be5 : nop
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x10]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6ecfe80
        cmp dword ptr ss : [esp+8], esi
        jne public_6f72be5
        mov eax, dword ptr ss : [esp+0x20]
        public_6f72c10 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f72c19 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x6f72a80)
    }
}

#undef public_6f72ab0
#undef public_6f72ac4
#undef public_6f72b31
#undef public_6f72b41
#undef public_6f72b5e
#undef public_6f72ba0
#undef public_6f72bc3
#undef public_6f72be5
#undef public_6f72c10
#undef public_6f72c19
