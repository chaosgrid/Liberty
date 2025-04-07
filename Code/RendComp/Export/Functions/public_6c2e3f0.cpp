#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f34);

#define public_6c2e4bd _public_6c2e4bd
#define public_6c2e4d0 _public_6c2e4d0
#define public_6c2e4f3 _public_6c2e4f3
#define public_6c2e4f8 _public_6c2e4f8
#define public_6c2e4fc _public_6c2e4fc
#define public_6c2e507 _public_6c2e507

PROC_DECLARE(0x6c2e3f0, internal_6c2e3f0, public_6c2e3f0);
extern "C" NAKED register_t __cdecl internal_6c2e3f0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6c37d70]
        push ebx
        mov eax, 1
        xor bl, bl
        test al, cl
        push esi
        jne public_6c2e4bd
        mov dl, cl
        or dl, al
        mov byte ptr ds : [public_6c37d70], dl
        mov dword ptr ds : [public_6c37ce0], eax
        mov eax, 8
        mov edx, 0x10
        mov ecx, 4
/*FIXUP push offset _public_6c2e3e0 @0x6c2e425*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c2e3e0
        mov dword ptr ds : [public_6c37ce4], 0xE
        mov dword ptr ds : [public_6c37ce8], 0xC
        mov dword ptr ds : [public_6c37cec], 0x800
        mov dword ptr ds : [public_6c37cf0], 0xC
        mov dword ptr ds : [public_6c37cf4], 0x30
        mov dword ptr ds : [public_6c37cf8], eax
        mov dword ptr ds : [public_6c37cfc], edx
        mov dword ptr ds : [public_6c37d00], 0xC
        mov dword ptr ds : [public_6c37d04], 2
        mov dword ptr ds : [public_6c37d08], 0x100
        mov dword ptr ds : [public_6c37d0c], eax
        mov dword ptr ds : [public_6c37d10], ecx
        mov dword ptr ds : [public_6c37d14], 0x200
        mov dword ptr ds : [public_6c37d18], eax
        mov dword ptr ds : [public_6c37d1c], edx
        mov dword ptr ds : [public_6c37d20], 0x40
        mov dword ptr ds : [public_6c37d24], ecx
        call public_6c34f34
        add esp, 4
        public_6c2e4bd : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, offset public_6c37ce4
        lea ebx, ds:[ebx]
        public_6c2e4d0 : nop
        cmp esi, dword ptr ds : [ecx-4]
        jne public_6c2e4fc
        mov eax, dword ptr ds : [ecx]
        test ah, 0xF
        je public_6c2e4f3
        mov eax, edx
        and eax, 0xF00
        je public_6c2e4f8
        shr eax, 8
        lea ebx, ds:[esi-2]
        cmp eax, ebx
        sbb bl, bl
        inc bl
        jmp public_6c2e4f8
        public_6c2e4f3 : nop
        test edx, eax
        setne bl
        public_6c2e4f8 : nop
        test bl, bl
        jne public_6c2e507
        public_6c2e4fc : nop
        add ecx, 0xC
        cmp ecx, offset public_6c37d2c
        jl public_6c2e4d0
        public_6c2e507 : nop
        pop esi
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c2e3f0)
    }
}

#undef public_6c2e4bd
#undef public_6c2e4d0
#undef public_6c2e4f3
#undef public_6c2e4f8
#undef public_6c2e4fc
#undef public_6c2e507
