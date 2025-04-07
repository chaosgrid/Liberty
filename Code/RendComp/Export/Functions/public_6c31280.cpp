#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31280);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f34);

#define public_6c31345 _public_6c31345
#define public_6c31350 _public_6c31350
#define public_6c3137b _public_6c3137b
#define public_6c31380 _public_6c31380
#define public_6c31384 _public_6c31384
#define public_6c31397 _public_6c31397
#define public_6c31444 _public_6c31444
#define public_6c31450 _public_6c31450
#define public_6c31484 _public_6c31484
#define public_6c314aa _public_6c314aa
#define public_6c314b3 _public_6c314b3
#define public_6c314b7 _public_6c314b7
#define public_6c314c3 _public_6c314c3
#define public_6c314d4 _public_6c314d4
#define public_6c314ea _public_6c314ea

PROC_DECLARE(0x6c31280, internal_6c31280, public_6c31280);
extern "C" NAKED register_t __cdecl internal_6c31280()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [eax+0x34]
        movzx edx, word ptr ds : [ecx+0xC]
        mov al, byte ptr ds : [public_6c37d70]
        push ebx
        push esi
        xor bl, bl
        test al, 1
        push edi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0xC], 0
        mov edi, 0x800
        mov esi, 0x30
        jne public_6c31345
        mov dl, al
        mov eax, 0xC
        push eax
        push 0x10
        or dl, 1
        push 8
        mov ecx, offset public_6c37cf8
        mov byte ptr ds : [public_6c37d70], dl
        mov dword ptr ds : [public_6c37ce0], 1
        mov dword ptr ds : [public_6c37ce4], 0xE
        mov dword ptr ds : [public_6c37ce8], eax
        mov dword ptr ds : [public_6c37cec], edi
        mov dword ptr ds : [public_6c37cf0], eax
        mov dword ptr ds : [public_6c37cf4], esi
        call public_6c25cc0
        push 8
        push 0x100
        push 2
        mov ecx, offset public_6c37d04
        call public_6c25cc0
        push 8
        push 0x200
        push 4
        mov ecx, offset public_6c37d10
        call public_6c25cc0
        push 4
        push 0x40
        push 0x10
        mov ecx, offset public_6c37d1c
        call public_6c25cc0
/*FIXUP push offset _public_6c2e3e0 @0x6c31334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c2e3e0
        call public_6c34f34
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        public_6c31345 : nop
        mov ecx, offset public_6c37ce4
        lea ebx, ds:[ebx]
        public_6c31350 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ds : [ecx-4]
        jne public_6c31384
        mov eax, dword ptr ds : [ecx]
        test ah, 0xF
        je public_6c3137b
        mov eax, edx
        and eax, 0xF00
        je public_6c31380
        mov ebx, dword ptr ss : [esp+0x20]
        add ebx, 0xFFFFFFFE
        shr eax, 8
        cmp eax, ebx
        sbb bl, bl
        inc bl
        jmp public_6c31380
        public_6c3137b : nop
        test edx, eax
        setne bl
        public_6c31380 : nop
        test bl, bl
        jne public_6c31397
        public_6c31384 : nop
        add ecx, 0xC
        cmp ecx, offset public_6c37d2c
        jl public_6c31350
        test bl, bl
        je public_6c314ea
        public_6c31397 : nop
        mov al, byte ptr ds : [public_6c37d70]
        test al, 1
        jne public_6c31444
        push 8
        mov bl, al
        push 0x100
        or bl, 1
        push 2
        mov ecx, offset public_6c37d04
        mov byte ptr ds : [public_6c37d70], bl
        mov dword ptr ds : [public_6c37ce0], 1
        mov dword ptr ds : [public_6c37ce4], 0xE
        mov dword ptr ds : [public_6c37ce8], 0xC
        mov dword ptr ds : [public_6c37cec], edi
        mov dword ptr ds : [public_6c37cf0], 0xC
        mov dword ptr ds : [public_6c37cf4], esi
        mov dword ptr ds : [public_6c37cf8], 8
        mov dword ptr ds : [public_6c37cfc], 0x10
        mov dword ptr ds : [public_6c37d00], 0xC
        call public_6c25cc0
        push 8
        push 0x200
        push 4
        mov ecx, offset public_6c37d10
        call public_6c25cc0
        push 4
        push 0x40
        push 0x10
        mov ecx, offset public_6c37d1c
        call public_6c25cc0
/*FIXUP push offset _public_6c2e3e0 @0x6c31437*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c2e3e0
        call public_6c34f34
        add esp, 4
        public_6c31444 : nop
        mov dword ptr ss : [esp+0x10], offset public_6c37ce0
        lea esp, ss:[esp]
        public_6c31450 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx]
        cmp dword ptr ss : [esp+0x20], edi
        je public_6c314ea
        lea edx, ss:[esp+0x18]
        push edx
        xor bl, bl
        mov dword ptr ss : [esp+0x1C], 0
        call public_6c2e2f0
        add esp, 4
        xor esi, esi
        test eax, eax
        jle public_6c314d4
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[ecx+4]
        public_6c31484 : nop
        cmp edi, dword ptr ds : [edx-4]
        jne public_6c314b7
        mov ecx, dword ptr ds : [edx]
        test ch, 0xF
        je public_6c314aa
        mov ecx, dword ptr ss : [esp+0x14]
        and ecx, 0xF00
        je public_6c314b3
        shr ecx, 8
        lea ebx, ds:[edi-2]
        cmp ecx, ebx
        sbb bl, bl
        inc bl
        jmp public_6c314b3
        public_6c314aa : nop
        mov ebx, dword ptr ss : [esp+0x14]
        test ebx, ecx
        setne bl
        public_6c314b3 : nop
        test bl, bl
        jne public_6c314c3
        public_6c314b7 : nop
        inc esi
        add edx, 0xC
        cmp esi, eax
        jl public_6c31484
        test bl, bl
        je public_6c314d4
        public_6c314c3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+8]
        add ecx, eax
        mov dword ptr ss : [esp+0xC], ecx
        public_6c314d4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 0xC
        cmp eax, offset public_6c37d28
        mov dword ptr ss : [esp+0x10], eax
        jl public_6c31450
        public_6c314ea : nop
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6c31280)
    }
}

#undef public_6c31345
#undef public_6c31350
#undef public_6c3137b
#undef public_6c31380
#undef public_6c31384
#undef public_6c31397
#undef public_6c31444
#undef public_6c31450
#undef public_6c31484
#undef public_6c314aa
#undef public_6c314b3
#undef public_6c314b7
#undef public_6c314c3
#undef public_6c314d4
#undef public_6c314ea
