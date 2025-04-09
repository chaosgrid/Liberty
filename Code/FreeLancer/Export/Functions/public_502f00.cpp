#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_502f00);
CLANG_FORWARD_PROC_SYMBOL(public_503070);

#define public_502f18 _public_502f18
#define public_502f33 _public_502f33
#define public_502fff _public_502fff
#define public_503034 _public_503034
#define public_503059 _public_503059

PROC_DECLARE(0x502f00, internal_502f00, public_502f00);
extern "C" NAKED register_t __cdecl internal_502f00()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        jne public_502f18
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        public_502f18 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x40]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x48], ebx
        jle public_503059
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        lea edi, ds:[esi+0x2C]
        public_502f33 : nop
        cmp byte ptr ds : [edi], 0
        jne public_503034
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 0x41
        jne public_503034
        lea ecx, ds:[edi+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edi], 1
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x40], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+4]
        lea ebx, ds:[ebx+ecx+4]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_502fff
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[edi+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        push edx
        push ebx
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        test al, al
        jne public_503034
        public_502fff : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[ecx+eax+4]
        mov ebx, 0x100002
        call dword ptr ds : [public_5c6044]
        mov edx, dword ptr ss : [esp+0x4C]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push edx
        push 0x12C
/*FIXUP push offset public_5da80c @0x503024*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
/*FIXUP push offset public_5daa00 @0x503029*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daa00
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x18
        public_503034 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ebx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+0x40]
        inc eax
        add ebx, 0xC
        add edi, 0x24
        cmp eax, edx
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0xC], ebx
        jl public_502f33
        pop edi
        public_503059 : nop
        pop esi
        pop ebx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x502f00)
    }
}

#undef public_502f18
#undef public_502f33
#undef public_502fff
#undef public_503034
#undef public_503059
