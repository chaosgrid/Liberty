#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e740);
CLANG_FORWARD_PROC_SYMBOL(public_41e880);
CLANG_FORWARD_PROC_SYMBOL(public_41ef20);
CLANG_FORWARD_PROC_SYMBOL(public_45a270);
CLANG_FORWARD_PROC_SYMBOL(public_535980);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_577680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b82d0);

#define public_41ef4e _public_41ef4e
#define public_41eff0 _public_41eff0
#define public_41f076 _public_41f076
#define public_41f091 _public_41f091
#define public_41f0f9 _public_41f0f9
#define public_41f133 _public_41f133
#define public_41f141 _public_41f141

PROC_DECLARE(0x41ef20, internal_41ef20, public_41ef20);
extern "C" NAKED register_t __cdecl internal_41ef20()
{
    __asm
    {
        mov al, byte ptr ds : [public_61682c]
        sub esp, 0x40
        test al, 1
        jne public_41ef4e
        mov dl, al
        or dl, 1
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_61682c], dl
        call public_41e740
/*FIXUP push offset _public_41e880 @0x41ef41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41e880
        call public_5b7e6c
        add esp, 4
        public_41ef4e : nop
        mov al, byte ptr ds : [public_616854]
        test al, al
        push esi
        jne public_41f076
        mov byte ptr ds : [public_616854], 1
        call dword ptr ds : [public_5c72c4]
        push 0
/*FIXUP push offset public_6167c4 @0x41ef6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c4
/*FIXUP push offset public_5e752c @0x41ef70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e752c
        push 0x800
        push 0
        mov dword ptr ds : [public_6167f8], eax
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b82d0
        mov eax, dword ptr ds : [public_6167c4]
        mov ecx, dword ptr ds : [eax]
        push 0
/*FIXUP push offset public_6167c8 @0x41ef96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c8
/*FIXUP push offset public_5e74ec @0x41ef9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74ec
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_6167c8]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e772c @0x41efab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e772c
        push eax
        call dword ptr ds : [edx+0x2C]
        mov al, byte ptr ds : [public_6167cc]
        or al, 0x60
        test al, 0x40
        mov byte ptr ds : [public_6167cc], al
        je public_41f076
        mov ecx, dword ptr ds : [public_6167dc]
        mov esi, 0x80
        cmp ecx, esi
        je public_41f076
        mov ecx, dword ptr ds : [public_6167c8]
        test ecx, ecx
        je public_41eff0
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+0x20]
        mov al, byte ptr ds : [public_6167cc]
        public_41eff0 : nop
        and al, 0xF3
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_6167cc], al
        call public_535980
        mov eax, dword ptr ds : [public_6167c8]
        lea edx, ss:[esp+0xC]
        push edx
        push 1
        mov dword ptr ss : [esp+0x14], 0x14
        mov dword ptr ss : [esp+0x18], 0x10
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], esi
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jl public_41f076
        mov eax, dword ptr ds : [public_6167e0]
        push eax
        mov dword ptr ds : [public_6167dc], esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_6167dc]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_6167e0], 0
        je public_41f076
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [public_6167e0], eax
        public_41f076 : nop
        mov ecx, dword ptr ds : [public_616860]
        mov eax, dword ptr ds : [public_6167c0]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_616860], ecx
        je public_41f141
        push edi
        public_41f091 : nop
        mov eax, dword ptr ds : [public_6167bc]
        mov esi, dword ptr ds : [eax]
        add esi, 8
        mov ecx, 9
        lea edi, ss:[esp+0x24]
        rep movsd
        mov edx, dword ptr ds : [eax]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
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
        mov ecx, dword ptr ds : [public_6167c0]
        mov al, byte ptr ss : [esp+0x44]
        add esp, 4
        dec ecx
        test al, al
        mov dword ptr ds : [public_6167c0], ecx
        je public_41f0f9
        push 0
        push 5
        call public_5763b0
        add esp, 8
        jmp public_41f133
        public_41f0f9 : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_41f133
        lea eax, ss:[esp+0x24]
        push eax
        call public_577680
        add esp, 4
        test al, al
        jne public_41f133
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        jne public_41f133
        mov al, byte ptr ss : [esp+0x3C]
        test al, al
        je public_41f133
        push 0
        push 0
        push 0x201
        call public_45a270
        add esp, 0xC
        public_41f133 : nop
        mov eax, dword ptr ds : [public_6167c0]
        test eax, eax
        jne public_41f091
        pop edi
        public_41f141 : nop
        dec dword ptr ds : [public_616860]
        pop esi
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x41ef20)
    }
}

#undef public_41ef4e
#undef public_41eff0
#undef public_41f076
#undef public_41f091
#undef public_41f0f9
#undef public_41f133
#undef public_41f141
