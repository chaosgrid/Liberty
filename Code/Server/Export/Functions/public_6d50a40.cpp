#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d50aa3 _public_6d50aa3
#define public_6d50ad3 _public_6d50ad3
#define public_6d50ad5 _public_6d50ad5
#define public_6d50ad9 _public_6d50ad9
#define public_6d50ae6 _public_6d50ae6

PROC_DECLARE(0x6d50a40, internal_6d50a40, public_6d50a40);
extern "C" NAKED register_t __cdecl internal_6d50a40()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x3D0]
        test eax, eax
        je public_6d50ae6
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push esi
        mov esi, dword ptr ds : [ebx+0x348]
        imul esi, 0x418
        push edi
        mov edi, dword ptr ds : [public_6d90260]
        mov esi, dword ptr ds : [esi+edi-0x34]
        push esi
        push eax
        call dword ptr ds : [edx+0x1B0]
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        je public_6d50ad9
        mov eax, dword ptr ds : [ebx+0x3D0]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov ebp, dword ptr ds : [eax+ecx-0x40]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[eax+ecx-0x44]
        je public_6d50ad9
        public_6d50aa3 : nop
        mov edx, dword ptr ds : [esi+8]
        cmp edx, dword ptr ds : [ebx+0x348]
        jne public_6d50ad3
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        jmp public_6d50ad5
        public_6d50ad3 : nop
        mov esi, dword ptr ds : [esi]
        public_6d50ad5 : nop
        cmp esi, ebp
        jne public_6d50aa3
        public_6d50ad9 : nop
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x3D0], 0
        pop ebp
        public_6d50ae6 : nop
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d50a40)
    }
}

#undef public_6d50aa3
#undef public_6d50ad3
#undef public_6d50ad5
#undef public_6d50ad9
#undef public_6d50ae6
