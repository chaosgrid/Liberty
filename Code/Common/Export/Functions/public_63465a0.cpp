#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6344070);
CLANG_FORWARD_PROC_SYMBOL(public_63464a0);
CLANG_FORWARD_PROC_SYMBOL(public_63465a0);
CLANG_FORWARD_PROC_SYMBOL(public_6346770);
CLANG_FORWARD_PROC_SYMBOL(public_6346fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6347410);
CLANG_FORWARD_PROC_SYMBOL(public_6347d80);
CLANG_FORWARD_PROC_SYMBOL(public_63555b0);
CLANG_FORWARD_PROC_SYMBOL(public_63562d0);
CLANG_FORWARD_PROC_SYMBOL(public_6358c50);
CLANG_FORWARD_PROC_SYMBOL(public_635a1e0);

#define public_63465ea _public_63465ea
#define public_6346605 _public_6346605
#define public_634660e _public_634660e
#define public_6346617 _public_6346617
#define public_6346632 _public_6346632
#define public_6346661 _public_6346661
#define public_634667a _public_634667a
#define public_6346690 _public_6346690
#define public_6346703 _public_6346703
#define public_634670f _public_634670f
#define public_634672b _public_634672b
#define public_6346749 _public_6346749
#define public_6346752 _public_6346752
#define public_6346758 _public_6346758
#define public_634675e _public_634675e

PROC_DECLARE(0x63465a0, internal_63465a0, public_63465a0);
extern "C" NAKED register_t __cdecl internal_63465a0()
{
    __asm
    {
        sub esp, 0xDC
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [eax+0xA4]
        inc word ptr ds : [eax+0x10]
        push esi
        push edi
        call public_6347410
        mov ecx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ecx+0xA4]
        dec word ptr ds : [ecx+0x10]
        call public_6344070
        test byte ptr ds : [ebx], 0xC
        je public_63465ea
        mov edx, dword ptr ds : [ebx+0x60]
        and edx, 0xFFFFFF08
        or edx, 8
        mov esi, 0x10
        mov dword ptr ds : [ebx+0x60], edx
        jmp public_634660e
        public_63465ea : nop
        mov eax, dword ptr ds : [ebx+0x60]
        mov ecx, eax
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jle public_6346605
        and eax, 0xFFFFFF08
        or eax, 8
        mov dword ptr ds : [ebx+0x60], eax
        public_6346605 : nop
        mov esi, dword ptr ds : [ebx+0x60]
        shl esi, 0x18
        sar esi, 0x18
        public_634660e : nop
        xor edx, edx
        mov dx, word ptr ds : [ebx+0x52]
        dec edx
        js public_6346632
        public_6346617 : nop
        mov eax, dword ptr ds : [ebx+0x54]
        mov eax, dword ptr ds : [eax+edx*4]
        mov ecx, dword ptr ds : [eax+0x78]
        mov edi, ecx
        xor edi, esi
        and edi, 0xFF
        xor edi, ecx
        dec edx
        mov dword ptr ds : [eax+0x78], edi
        jns public_6346617
        public_6346632 : nop
        test byte ptr ds : [ebx], 0xC
        mov ecx, ebx
        jne public_634672b
        call public_6347d80
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ecx+0xA4]
        inc word ptr ds : [eax+0x10]
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x52]
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        js public_634670f
        push ebp
        public_6346661 : nop
        mov edx, dword ptr ds : [ebx+0x54]
        mov ecx, dword ptr ds : [edx+eax*4]
        mov edi, dword ptr ds : [ecx+0x28]
        test edi, edi
        je public_6346703
        movsx edx, word ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [edx+edi+0x70]
        public_634667a : nop
        movsx esi, word ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [esi+edi+0x70]
        add esi, edi
        cmp eax, ebp
        je public_6346690
        push eax
        mov ecx, ebp
        call public_63555b0
/*FIXUP public_6346690 : nop
        push offset _public_6261260 @0x6346690*/
  FIXUP public_6346690 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 2
        push 0x10
        lea eax, ss:[esp+0x98]
        push eax
        call public_6273bc0
/*FIXUP push offset _public_6261260 @0x63466a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 2
        push 0x10
        lea ecx, ss:[esp+0xB8]
        push ecx
        call public_6273bc0
/*FIXUP push offset _public_6261260 @0x63466bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 2
        push 0x10
        lea edx, ss:[esp+0xD8]
        push edx
        call public_6273bc0
        lea ecx, ss:[esp+0x14]
        call public_6346770
        mov ecx, esi
        call public_635a1e0
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6358c50
        mov ecx, esi
        call public_63562d0
        mov edi, dword ptr ds : [edi]
        test edi, edi
        jne public_634667a
        mov eax, dword ptr ss : [esp+0x10]
        public_6346703 : nop
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jns public_6346661
        pop ebp
        public_634670f : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ecx+0xA4]
        dec word ptr ds : [ecx+0x10]
        call public_6344070
        pop edi
        pop esi
        pop ebx
        add esp, 0xDC
        ret 
        public_634672b : nop
        call public_6346fb0
        mov ecx, ebx
        call public_63464a0
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x52]
        dec eax
        js public_634675e
        mov edx, dword ptr ds : [ebx+0x54]
        lea ecx, ds:[edx+eax*4]
        lea edx, ds:[eax+1]
        public_6346749 : nop
        mov eax, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax+0x28]
        test eax, eax
        je public_6346758
        public_6346752 : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_6346752
        public_6346758 : nop
        sub ecx, 4
        dec edx
        jne public_6346749
        public_634675e : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xDC
        ret 
        UNREACHABLE_TRAP(0x63465a0)
    }
}

#undef public_63465ea
#undef public_6346605
#undef public_634660e
#undef public_6346617
#undef public_6346632
#undef public_6346661
#undef public_634667a
#undef public_6346690
#undef public_6346703
#undef public_634670f
#undef public_634672b
#undef public_6346749
#undef public_6346752
#undef public_6346758
#undef public_634675e
