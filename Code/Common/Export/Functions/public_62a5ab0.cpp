#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271d00);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62a3070);
CLANG_FORWARD_PROC_SYMBOL(public_62a5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_62a6010);
CLANG_FORWARD_PROC_SYMBOL(public_62a6190);
CLANG_FORWARD_PROC_SYMBOL(public_62a6260);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a6a50);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);
CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_JUMP_SYMBOL(public_6393e6b);

#define public_62a5b20 _public_62a5b20
#define public_62a5bd0 _public_62a5bd0
#define public_62a5ce1 _public_62a5ce1
#define public_62a5d00 _public_62a5d00
#define public_62a5d4c _public_62a5d4c

PROC_DECLARE(0x62a5ab0, internal_62a5ab0, public_62a5ab0);
extern "C" NAKED register_t __cdecl internal_62a5ab0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393e6b @0x62a5ab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393e6b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xF4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x4C]
        push edi
        mov bl, 1
        mov dword ptr ss : [esp+0x2C], eax
        je public_62a5b20
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+4]
        mov bl, al
        neg bl
        sbb bl, bl
        inc bl
        je public_62a5b20
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62a5b20
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], ecx
        public_62a5b20 : nop
        push ebp
        call public_62a6010
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_62a5d4c
        test bl, bl
        je public_62a5d4c
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x20]
        lea edi, ds:[esi+0x14]
        push eax
        mov ecx, edi
        call public_6301640
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        je public_62a5bd0
        mov eax, dword ptr ds : [ecx+0x50]
        cmp eax, 1
        je public_62a5d4c
        cmp eax, 2
        je public_62a5d4c
        mov ecx, dword ptr ss : [esp+0xF8]
        push ebp
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6288800
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        add esp, 0xC
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fcomp dword ptr ss : [esp+0x100]
        fnstsw ax
        test ah, 5
        jp public_62a5d4c
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+0x50], 2
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+0x10], 0
        jmp public_62a5d4c
        public_62a5bd0 : nop
        mov eax, dword ptr ss : [esp+0xF8]
        fld dword ptr ds : [eax+8]
        sub esp, 0xC
        fsub dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fcomp dword ptr ss : [esp+0x100]
        fnstsw ax
        test ah, 5
        jp public_62a5d4c
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62a5d4c
        mov al, byte ptr ss : [esp+0x23]
        xor ebx, ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x80], al
        call public_62b9490
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x38], esi
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x8C], ecx
        push edx
        lea ecx, ss:[esp+0x94]
        mov dword ptr ss : [esp+0xF4], ebx
        call public_62a3070
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0xF8], 1
        call public_62a6a50
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0xF0], bl
        call public_62a6190
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0xF0], 2
        mov edi, eax
        mov dword ptr ss : [esp+0x28], ecx
        je public_62a5d00
        public_62a5ce1 : nop
        mov ecx, dword ptr ds : [ecx+8]
        call public_62af640
        push ebx
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x30]
        call public_632ca20
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, edi
        jne public_62a5ce1
        public_62a5d00 : nop
        lea ecx, ss:[esp+0x78]
        call public_6271d00
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0xF0], 0xFFFFFFFF
        call public_62a68e0
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[eax+0x10]
        mov dword ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [ecx+0x3C], edx
        mov eax, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov dword ptr ds : [ecx+0x50], eax
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ds:[esi+0x50]
        push eax
        push esi
        push edx
        push ebp
        call public_62a6260
        public_62a5d4c : nop
        mov ecx, dword ptr ss : [esp+0xE8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE4
        ret 0xC
        UNREACHABLE_TRAP(0x62a5ab0)
    }
}

#undef public_62a5b20
#undef public_62a5bd0
#undef public_62a5ce1
#undef public_62a5d00
#undef public_62a5d4c
