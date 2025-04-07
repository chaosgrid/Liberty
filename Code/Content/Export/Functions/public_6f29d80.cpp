#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f29d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae57f);

#define public_6f29e90 _public_6f29e90
#define public_6f29ebb _public_6f29ebb
#define public_6f29f46 _public_6f29f46
#define public_6f29f71 _public_6f29f71
#define public_6f29ff0 _public_6f29ff0
#define public_6f2a012 _public_6f2a012
#define public_6f2a032 _public_6f2a032

PROC_DECLARE(0x6f29d80, internal_6f29d80, public_6f29d80);
extern "C" NAKED register_t __cdecl internal_6f29d80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae57f @0x6f29d82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae57f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov al, byte ptr ss : [esp+0x40]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], al
        call public_6f93790
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x38], 1
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x48]
        sub eax, ebx
        je public_6f29f71
        dec eax
        je public_6f29ebb
        dec eax
        jne public_6f2a032
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd0794
        call public_6f7b0f0
        mov ecx, dword ptr ds : [public_6fd0798]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6f2a032
        lea edx, ss:[esp+0x44]
        lea ecx, ds:[eax+0x10]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f2a032
        lea edi, ds:[ecx+0x10]
        lea edx, ss:[esp+0x20]
        cmp edx, edi
        je public_6f2a032
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6f1df30
        mov esi, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, esi
        mov edi, dword ptr ds : [edi+4]
        je public_6f2a012
        mov ecx, dword ptr ss : [esp+0x48]
        lea ecx, ds:[ecx]
        public_6f29e90 : nop
        cmp ecx, edi
        je public_6f2a012
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0xC], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x48], ecx
        jne public_6f29e90
        jmp public_6f2a012
        public_6f29ebb : nop
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6fd07ac
        call public_6f7b0f0
        mov ecx, dword ptr ds : [public_6fd07b0]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6f2a032
        lea ecx, ds:[eax+0x10]
        lea eax, ss:[esp+0x44]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f2a032
        lea edi, ds:[ecx+0x10]
        lea ecx, ss:[esp+0x20]
        cmp ecx, edi
        je public_6f2a032
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6f1df30
        mov esi, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, esi
        mov edi, dword ptr ds : [edi+4]
        je public_6f2a012
        mov ecx, dword ptr ss : [esp+0x48]
        public_6f29f46 : nop
        cmp ecx, edi
        je public_6f2a012
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0xC], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x48], ecx
        jne public_6f29f46
        jmp public_6f2a012
        public_6f29f71 : nop
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6fd07c4
        call public_6f7b0f0
        mov ecx, dword ptr ds : [public_6fd07c8]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6f2a032
        lea ecx, ds:[eax+0x10]
        lea eax, ss:[esp+0x44]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f2a032
        lea edi, ds:[ecx+0x10]
        lea ecx, ss:[esp+0x20]
        cmp ecx, edi
        je public_6f2a032
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6f1df30
        mov esi, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, esi
        mov edi, dword ptr ds : [edi+4]
        je public_6f2a012
        mov ecx, dword ptr ss : [esp+0x48]
        public_6f29ff0 : nop
        cmp ecx, edi
        je public_6f2a012
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0xC], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x48], ecx
        jne public_6f29ff0
        public_6f2a012 : nop
        push esi
        lea edx, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        push edx
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x48]
        push edi
        push eax
        lea ecx, ss:[esp+0x28]
        push esi
        call public_6ed0230
        public_6f2a032 : nop
        mov cl, byte ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x3C]
        push ebx
        mov byte ptr ds : [esi], cl
        push ebx
        mov ecx, esi
        call public_6f93790
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        call public_6f1df30
        mov edi, eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed0230
        mov dword ptr ss : [esp+0x18], 1
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x34], bl
        call public_6f15350
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6f29d80)
    }
}

#undef public_6f29e90
#undef public_6f29ebb
#undef public_6f29f46
#undef public_6f29f71
#undef public_6f29ff0
#undef public_6f2a012
#undef public_6f2a032
