#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7af0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd040);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4fd050 _public_4fd050
#define public_4fd060 _public_4fd060
#define public_4fd071 _public_4fd071
#define public_4fd082 _public_4fd082
#define public_4fd0ac _public_4fd0ac
#define public_4fd0bc _public_4fd0bc
#define public_4fd0be _public_4fd0be
#define public_4fd0c5 _public_4fd0c5

PROC_DECLARE(0x4fd040, internal_4fd040, public_4fd040);
extern "C" NAKED register_t __cdecl internal_4fd040()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_4fd0c5
        push ebp
        push edi
        nop 
        public_4fd050 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        lea edi, ds:[esi+8]
        je public_4fd060
        test byte ptr ds : [eax+8], 2
        je public_4fd0ac
        public_4fd060 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_4fd071
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_4fd0ac
        public_4fd071 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4fd082
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        je public_4fd0ac
        public_4fd082 : nop
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx], ebp
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, edi
        call public_502d90
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+8], eax
        mov esi, ebp
        jmp public_4fd0be
        public_4fd0ac : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_4fd0bc
        or byte ptr ds : [ecx+8], 1
        call public_4f7af0
        public_4fd0bc : nop
        mov esi, dword ptr ds : [esi]
        public_4fd0be : nop
        cmp esi, dword ptr ds : [ebx+4]
        jne public_4fd050
        pop edi
        pop ebp
        public_4fd0c5 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4fd040)
    }
}

#undef public_4fd050
#undef public_4fd060
#undef public_4fd071
#undef public_4fd082
#undef public_4fd0ac
#undef public_4fd0bc
#undef public_4fd0be
#undef public_4fd0c5
