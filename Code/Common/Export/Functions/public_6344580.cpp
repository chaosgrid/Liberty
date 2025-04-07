#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344580);
CLANG_FORWARD_PROC_SYMBOL(public_6352480);
CLANG_FORWARD_PROC_SYMBOL(public_63527e0);
CLANG_FORWARD_PROC_SYMBOL(public_6352930);
CLANG_FORWARD_PROC_SYMBOL(public_63529e0);

#define public_63445bf _public_63445bf
#define public_63445cf _public_63445cf
#define public_63445e0 _public_63445e0
#define public_63445fb _public_63445fb
#define public_634463f _public_634463f
#define public_6344653 _public_6344653
#define public_6344668 _public_6344668
#define public_6344689 _public_6344689
#define public_63446cd _public_63446cd
#define public_63446e1 _public_63446e1
#define public_63446ea _public_63446ea
#define public_63446fa _public_63446fa

PROC_DECLARE(0x6344580, internal_6344580, public_6344580);
extern "C" NAKED register_t __cdecl internal_6344580()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        lea eax, ds:[ebx+ebx*4]
        lea eax, ds:[eax+eax*4]
        push edi
        mov edi, ecx
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[ebx+eax*8]
        lea eax, ds:[ebx+ebx*2]
        sar ecx, 0x10
        lea eax, ds:[eax+eax*4]
        lea edx, ds:[eax+eax*4]
        add ecx, edx
        or ecx, 0x80000000
        push ecx
        lea ebp, ds:[edi+0x10]
        push ebx
        mov ecx, ebp
        call public_6352480
        xor esi, esi
        mov si, word ptr ss : [ebp+0x12]
        dec esi
        js public_63445cf
        public_63445bf : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebp
        call dword ptr ds : [edx+4]
        dec esi
        jns public_63445bf
        public_63445cf : nop
        mov eax, dword ptr ds : [edi+0x28]
        test eax, eax
        je public_6344653
        mov esi, dword ptr ds : [ebx+0x28]
        cmp esi, dword ptr ds : [edi]
        jne public_63445e0
        mov esi, dword ptr ds : [ebx+0x44]
        public_63445e0 : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        push esi
        call public_6352930
        cmp eax, 1
        jle public_63445fb
        mov ecx, dword ptr ds : [edi+0x2C]
        dec eax
        push eax
        push esi
        call public_63529e0
        jmp public_6344653
        public_63445fb : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        push esi
        call public_63527e0
        mov ebp, dword ptr ds : [edi+0x28]
        lea eax, ds:[esi+esi*4]
        lea eax, ds:[eax+eax*4]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*8]
        lea eax, ds:[esi+esi*2]
        sar ecx, 0x10
        lea eax, ds:[eax+eax*4]
        lea edx, ds:[eax+eax*4]
        add ecx, edx
        or ecx, 0x80000000
        push ecx
        push esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6352480
        xor eax, eax
        mov ax, word ptr ss : [ebp+0x12]
        mov ebp, eax
        dec ebp
        js public_6344653
        public_634463f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ecx+ebp*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+4]
        dec ebp
        jns public_634463f
        public_6344653 : nop
        mov eax, dword ptr ds : [edi+0x34]
        test eax, eax
        je public_63446e1
        mov eax, dword ptr ds : [ebx+0x28]
        cmp eax, dword ptr ds : [edi]
        jne public_6344668
        mov eax, dword ptr ds : [ebx+0x44]
        public_6344668 : nop
        mov esi, dword ptr ds : [eax+0x98]
        mov ecx, dword ptr ds : [edi+0x30]
        push esi
        call public_6352930
        cmp eax, 1
        jle public_6344689
        mov ecx, dword ptr ds : [edi+0x30]
        dec eax
        push eax
        push esi
        call public_63529e0
        jmp public_63446e1
        public_6344689 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        push esi
        call public_63527e0
        mov ebp, dword ptr ds : [edi+0x34]
        lea eax, ds:[esi+esi*4]
        lea eax, ds:[eax+eax*4]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*8]
        lea eax, ds:[esi+esi*2]
        sar ecx, 0x10
        lea eax, ds:[eax+eax*4]
        lea edx, ds:[eax+eax*4]
        add ecx, edx
        or ecx, 0x80000000
        push ecx
        push esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6352480
        xor eax, eax
        mov ax, word ptr ss : [ebp+0x12]
        mov ebp, eax
        dec ebp
        js public_63446e1
        public_63446cd : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ecx+ebp*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+4]
        dec ebp
        jns public_63446cd
        public_63446e1 : nop
        xor esi, esi
        mov si, word ptr ds : [edi+0xA]
        dec esi
        js public_63446fa
        public_63446ea : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push edi
        call dword ptr ds : [edx+4]
        dec esi
        jns public_63446ea
        public_63446fa : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6344580)
    }
}

#undef public_63445bf
#undef public_63445cf
#undef public_63445e0
#undef public_63445fb
#undef public_634463f
#undef public_6344653
#undef public_6344668
#undef public_6344689
#undef public_63446cd
#undef public_63446e1
#undef public_63446ea
#undef public_63446fa
