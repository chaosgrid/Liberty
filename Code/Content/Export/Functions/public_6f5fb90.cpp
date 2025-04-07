#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0dd10);
CLANG_FORWARD_PROC_SYMBOL(public_6f0ddb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f5fb90);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68f70);
CLANG_FORWARD_PROC_SYMBOL(public_6f69780);
CLANG_FORWARD_PROC_SYMBOL(public_6f697d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafa68);

#define public_6f5fbe7 _public_6f5fbe7
#define public_6f5fc11 _public_6f5fc11
#define public_6f5fc2f _public_6f5fc2f
#define public_6f5fc44 _public_6f5fc44
#define public_6f5fcdb _public_6f5fcdb
#define public_6f5fdef _public_6f5fdef
#define public_6f5fdfb _public_6f5fdfb

PROC_DECLARE(0x6f5fb90, internal_6f5fb90, public_6f5fb90);
extern "C" NAKED register_t __cdecl internal_6f5fb90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafa68 @0x6f5fb92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafa68
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0xF]
        mov edi, ecx
        push eax
        lea ecx, ss:[esp+0x54]
        call public_6f93280
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x98], 0
        call public_6f1df30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        mov ebx, dword ptr ss : [esp+0x9C]
        je public_6f5fc2f
        public_6f5fbe7 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+0x28]
        cmp edx, dword ptr ds : [ebx]
        je public_6f5fc11
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_6f5fbe7
        jmp public_6f5fc2f
        public_6f5fc11 : nop
        add eax, 8
        push eax
        lea ecx, ss:[esp+0x54]
        call public_6f0ddb0
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_6f68f70
        public_6f5fc2f : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f5fdfb
        add ebx, 4
        push ebp
        mov dword ptr ss : [esp+0x14], ebx
        public_6f5fc44 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ebx, ds:[esi+0xC]
        lea ecx, ss:[esp+0x40]
        push ebx
        push ecx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        add esp, 0xC
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fcomp dword ptr ds : [public_6fbbbc0]
        fnstsw ax
        test ah, 0x41
        jp public_6f5fcdb
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ss:[esp+0x64]
        call public_6f0dd10
        lea eax, ds:[esi+8]
        push eax
        mov eax, dword ptr ss : [esp+0x68]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0xA4], 1
        call public_6f69780
        mov eax, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6f697d0
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x98], 0
        call public_6f15350
        jmp public_6f5fdef
        public_6f5fcdb : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        lea ebp, ds:[esi+0x18]
        lea edx, ss:[esp+0x4C]
        push ebp
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x5C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fcomp dword ptr ds : [public_6fbbbc0]
        fnstsw ax
        test ah, 0x41
        jp public_6f5fdef
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6f0dd10
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x80], edx
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x84], eax
        mov dword ptr ss : [esp+0x88], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x6C]
        push eax
        mov dword ptr ss : [esp+0x90], edx
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0xA4], 2
        mov dword ptr ss : [esp+0x78], 0
        call public_6f69780
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        call public_6f697d0
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x9C], 0
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], eax
        public_6f5fdef : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x10]
        jne public_6f5fc44
        pop ebp
        public_6f5fdfb : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0xA0], 0xFFFFFFFF
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x54]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x90]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 4
        UNREACHABLE_TRAP(0x6f5fb90)
    }
}

#undef public_6f5fbe7
#undef public_6f5fc11
#undef public_6f5fc2f
#undef public_6f5fc44
#undef public_6f5fcdb
#undef public_6f5fdef
#undef public_6f5fdfb
