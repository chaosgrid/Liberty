#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_633d770);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_633b100 _public_633b100
#define public_633b152 _public_633b152
#define public_633b196 _public_633b196
#define public_633b19e _public_633b19e
#define public_633b1a0 _public_633b1a0
#define public_633b1d9 _public_633b1d9
#define public_633b1f8 _public_633b1f8
#define public_633b1fc _public_633b1fc
#define public_633b210 _public_633b210

PROC_DECLARE(0x633b0c0, internal_633b0c0, public_633b0c0);
extern "C" NAKED register_t __cdecl internal_633b0c0()
{
    __asm
    {
        mov eax, 0x2028
        call public_6391dc0
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x8C]
        test eax, eax
        push esi
        push edi
        jne public_633b152
/*FIXUP push offset public_63a4948 @0x633b0da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4948
        call public_632e9f0
        mov dword ptr ds : [ebx+0x8C], eax
        mov eax, dword ptr ds : [ebx+0x84]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, eax
        je public_633b152
        lea esp, ss:[esp]
        public_633b100 : nop
        mov esi, dword ptr ds : [edi+0xC10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x8C]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x84]
        jne public_633b100
        public_633b152 : nop
        mov ecx, dword ptr ds : [ebx+0x8C]
        lea edx, ss:[esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x2040]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x34], 0x800
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [esp+0x34]
        xor ebx, ebx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], ebp
        jbe public_633b210
        cmp ebx, eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x14], ecx
        jae public_633b19e
        public_633b196 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx]
        jmp public_633b1a0
        public_633b19e : nop
        xor esi, esi
        public_633b1a0 : nop
        mov eax, dword ptr ss : [esp+0x203C]
        push esi
        push eax
        call public_633d770
        add esp, 8
        test al, al
        jne public_633b1fc
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        mov edi, eax
        test edi, 0x7FC0
        je public_633b1f8
        test ebp, ebp
        mov ecx, esi
        jne public_633b1d9
        mov eax, dword ptr ds : [esi]
        mov ebp, edi
        call dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x10]
        jmp public_633b1fc
        public_633b1d9 : nop
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x30]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_633b1fc
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov ebp, edi
        call dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x10]
        jmp public_633b1fc
        public_633b1f8 : nop
        or dword ptr ss : [esp+0x18], edi
        public_633b1fc : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x34]
        inc ebx
        add edx, 4
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], edx
        jb public_633b196
        public_633b210 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        or eax, ebp
        pop ebp
        pop ebx
        add esp, 0x2028
        ret 4
        UNREACHABLE_TRAP(0x633b0c0)
    }
}

#undef public_633b100
#undef public_633b152
#undef public_633b196
#undef public_633b19e
#undef public_633b1a0
#undef public_633b1d9
#undef public_633b1f8
#undef public_633b1fc
#undef public_633b210
