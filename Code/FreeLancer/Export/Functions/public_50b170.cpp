#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_50b170);
CLANG_FORWARD_PROC_SYMBOL(public_5501e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_50b190 _public_50b190
#define public_50b1a7 _public_50b1a7
#define public_50b1ad _public_50b1ad
#define public_50b1b7 _public_50b1b7
#define public_50b1de _public_50b1de
#define public_50b209 _public_50b209

PROC_DECLARE(0x50b170, internal_50b170, public_50b170);
extern "C" NAKED register_t __cdecl internal_50b170()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x74]
        test al, al
        je public_50b209
        push ebx
        mov ebx, dword ptr ds : [edi+0x68]
        push ebp
        push esi
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_50b1ad
        lea ebx, ds:[ebx]
        public_50b190 : nop
        mov ebp, dword ptr ds : [esi+8]
        test ebp, ebp
        je public_50b1a7
        mov ecx, ebp
        call public_5501e0
        push ebp
        call public_5b7e1d
        add esp, 4
        public_50b1a7 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_50b190
        public_50b1ad : nop
        mov ebp, dword ptr ds : [edi+0x68]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_50b1de
        public_50b1b7 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [edi+0x6C]
        add esp, 4
        dec ecx
        cmp esi, ebp
        mov dword ptr ds : [edi+0x6C], ecx
        jne public_50b1b7
        public_50b1de : nop
        mov eax, dword ptr ds : [edi+0x38]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [edi+0x40]
        push ecx
        call public_5b7e1d
        add esp, 8
        lea ecx, ds:[edi+4]
        call public_425a20
        pop esi
        pop ebp
        mov dword ptr ds : [edi+0x1C], 0
        mov byte ptr ds : [edi+0x74], 0
        pop ebx
        public_50b209 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x50b170)
    }
}

#undef public_50b190
#undef public_50b1a7
#undef public_50b1ad
#undef public_50b1b7
#undef public_50b1de
#undef public_50b209
