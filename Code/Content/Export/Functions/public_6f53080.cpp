#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53080);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f530b6 _public_6f530b6
#define public_6f530cb _public_6f530cb
#define public_6f530e8 _public_6f530e8
#define public_6f530fa _public_6f530fa

PROC_DECLARE(0x6f53080, internal_6f53080, public_6f53080);
extern "C" NAKED register_t __cdecl internal_6f53080()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        push 0x10
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f530fa
        push ebp
        public_6f530b6 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0x10
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6f530cb
        mov ebp, eax
        public_6f530cb : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f530e8
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6f530e8 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6f530b6
        pop ebp
        public_6f530fa : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f53080)
    }
}

#undef public_6f530b6
#undef public_6f530cb
#undef public_6f530e8
#undef public_6f530fa
