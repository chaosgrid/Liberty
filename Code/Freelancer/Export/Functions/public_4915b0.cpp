#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4915b0);
CLANG_FORWARD_PROC_SYMBOL(public_491f90);
CLANG_FORWARD_PROC_SYMBOL(public_4975a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);

#define public_4915f0 _public_4915f0
#define public_491793 _public_491793
#define public_4917a3 _public_4917a3

PROC_DECLARE(0x4915b0, internal_4915b0, public_4915b0);
extern "C" NAKED register_t __cdecl internal_4915b0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, 0x47DAC000
        push esi
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0xF48], 0x3F800000
        mov dword ptr ds : [ebx+0x4A8], eax
        mov dword ptr ds : [ebx+0x4AC], eax
        call dword ptr ds : [public_5c63ec]
        mov esi, eax
        test esi, esi
        je public_4917a3
        mov ebp, dword ptr ds : [public_5c71dc]
        mov edi, edi
        public_4915f0 : nop
        call ebp
        imul eax, 0x7D0
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, 0xBB8
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, esi
        fild qword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [eax+0x44]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x38], ecx
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_5d3d30]
        mov dword ptr ss : [esp+0x3C], edx
        fld dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_5d3d30]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x40], eax
        mov ecx, esi
        fstp dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_5d3d2c]
        fsub dword ptr ds : [public_5d3d28]
        fld dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x3C], 0
        fmul dword ptr ds : [public_5d3d2c]
        fsub dword ptr ds : [public_5d3d28]
        fxch 
        fstp dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [public_5d3d24]
        fstp dword ptr ss : [esp+0x40]
        call dword ptr ds : [edx]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x48]
        mov edx, dword ptr ds : [esi]
        mov byte ptr ss : [esp+0x18], al
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push edi
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        push eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
/*FIXUP push offset public_5d3d18 @0x4916bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3d18
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [edx+4], ecx
        push 4
        push 0
        mov ecx, ebx
        mov dword ptr ds : [edx+8], eax
        call public_491f90
        mov edi, eax
        mov dword ptr ds : [edi+0x64], esi
        call ebp
        imul eax, 7
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov dword ptr ds : [edi+0x54], eax
        call ebp
        imul eax, 0x384
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, 0x64
        xor esi, esi
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], esi
        fild qword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5d1494]
        fstp dword ptr ds : [edi+0x6C]
        call ebp
        imul eax, 0x64
        mov ecx, dword ptr ss : [esp+0x14]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        inc eax
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [edi+0x70]
        cmp eax, esi
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ds : [edi+0x40], ecx
        fild qword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c99c8]
        fstp dword ptr ds : [edi+0x68]
        je public_491793
        push esi
        push esi
        lea edx, ss:[esp+0x1B]
        push edx
        push eax
        mov byte ptr ss : [esp+0x23], 0
        call public_4c4da0
        mov al, byte ptr ss : [esp+0x23]
        mov dl, byte ptr ds : [edi+0x74]
        or dl, al
        mov al, dl
        and al, 1
        mov byte ptr ds : [edi+0x74], dl
        mov byte ptr ds : [edi+0x48], al
        mov al, byte ptr ds : [ebx+0x87E]
        add esp, 0x10
        test al, al
        je public_491793
        mov byte ptr ds : [edi+0x48], 1
        public_491793 : nop
        call dword ptr ds : [public_5c63e8]
        mov esi, eax
        test esi, esi
        jne public_4915f0
        public_4917a3 : nop
        mov ecx, ebx
        call public_4975a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x4915b0)
    }
}

#undef public_4915f0
#undef public_491793
#undef public_4917a3
