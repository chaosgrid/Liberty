#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31160);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f34);

#define public_6c31237 _public_6c31237
#define public_6c31240 _public_6c31240
#define public_6c31263 _public_6c31263
#define public_6c31268 _public_6c31268
#define public_6c3126c _public_6c3126c
#define public_6c31277 _public_6c31277

PROC_DECLARE(0x6c31160, internal_6c31160, public_6c31160);
extern "C" NAKED register_t __cdecl internal_6c31160()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [eax+0x34]
        push ebx
        push esi
        movzx esi, word ptr ds : [ecx+0xC]
        mov cl, byte ptr ds : [public_6c37d70]
        mov eax, 1
        xor bl, bl
        test al, cl
        jne public_6c31237
        mov dl, cl
        or dl, al
        mov byte ptr ds : [public_6c37d70], dl
        mov dword ptr ds : [public_6c37ce0], eax
        mov eax, 8
        mov edx, 0x10
        mov ecx, 4
/*FIXUP push offset _public_6c2e3e0 @0x6c3119f*/
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
        public_6c31237 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, offset public_6c37ce4
        public_6c31240 : nop
        cmp edx, dword ptr ds : [ecx-4]
        jne public_6c3126c
        mov eax, dword ptr ds : [ecx]
        test ah, 0xF
        je public_6c31263
        mov eax, esi
        and eax, 0xF00
        je public_6c31268
        shr eax, 8
        lea ebx, ds:[edx-2]
        cmp eax, ebx
        sbb bl, bl
        inc bl
        jmp public_6c31268
        public_6c31263 : nop
        test esi, eax
        setne bl
        public_6c31268 : nop
        test bl, bl
        jne public_6c31277
        public_6c3126c : nop
        add ecx, 0xC
        cmp ecx, offset public_6c37d2c
        jl public_6c31240
        public_6c31277 : nop
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c31160)
    }
}

#undef public_6c31237
#undef public_6c31240
#undef public_6c31263
#undef public_6c31268
#undef public_6c3126c
#undef public_6c31277
