#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5f760);
CLANG_FORWARD_PROC_SYMBOL(public_6f62750);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafa38);

#define public_6f5f7de _public_6f5f7de
#define public_6f5f83f _public_6f5f83f
#define public_6f5f8ef _public_6f5f8ef
#define public_6f5f8f3 _public_6f5f8f3

PROC_DECLARE(0x6f5f760, internal_6f5f760, public_6f5f760);
extern "C" NAKED register_t __cdecl internal_6f5f760()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafa38 @0x6f5f762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafa38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        mov al, byte ptr ss : [esp+0x7C]
        push ebx
        push ebp
        push esi
        xor esi, esi
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], esi
        mov edx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x80]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x80], esi
        call public_6f62750
        mov ebx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        cmp ebx, esi
        je public_6f5f7de
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebp
        sub ecx, ebx
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x7C], edx
        jne public_6f5f83f
        public_6f5f7de : nop
        mov eax, dword ptr ss : [esp+0x88]
        lea ecx, ds:[eax+4]
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ss : [esp+0x74], ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [eax], esi
        call public_6eec8d0
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 0x10
        public_6f5f83f : nop
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x28], eax
        lea ecx, ds:[ebx+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x34], ecx
        push edi
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [ebx+0x40]
        lea esi, ds:[ebx+0x10]
        mov ecx, 0xC
        lea edi, ss:[esp+0x3C]
        rep movsd
        cmp dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x6C], edx
        lea esi, ss:[ebp-0x44]
        je public_6f5f8f3
        cmp dword ptr ds : [esi], eax
        je public_6f5f8ef
        mov eax, dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x18]
        fld st(2)
        fmul st, st(3)
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(5)
        fmul st, st(6)
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcompp 
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_6f5f8f3
        public_6f5f8ef : nop
        lea esi, ss:[esp+0x2C]
        public_6f5f8f3 : nop
        mov edi, dword ptr ss : [esp+0x8C]
        mov ecx, 0x11
        push ebx
        rep movsd
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x74]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 0x10
        UNREACHABLE_TRAP(0x6f5f760)
    }
}

#undef public_6f5f7de
#undef public_6f5f83f
#undef public_6f5f8ef
#undef public_6f5f8f3
