#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282440);
CLANG_FORWARD_PROC_SYMBOL(public_62bbb90);

#define public_6282468 _public_6282468
#define public_62824b7 _public_62824b7
#define public_62824b9 _public_62824b9
#define public_62824c5 _public_62824c5
#define public_6282500 _public_6282500
#define public_6282519 _public_6282519

PROC_DECLARE(0x6282440, internal_6282440, public_6282440);
extern "C" NAKED register_t __cdecl internal_6282440()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], ecx
        je public_6282519
        mov eax, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        push edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        je public_62824c5
        public_6282468 : nop
        cmp edi, eax
        je public_6282500
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ds:[edi+8]
        call public_62bbb90
        test al, al
        je public_62824b7
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [edx+4], ecx
        mov edi, eax
        jmp public_62824b9
        public_62824b7 : nop
        mov esi, dword ptr ds : [esi]
        public_62824b9 : nop
        cmp esi, ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        jne public_6282468
        public_62824c5 : nop
        cmp edi, eax
        je public_6282500
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edx], ebx
        mov edx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+4], esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], edx
        lea ebx, ds:[ebx]
        public_6282500 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [ecx+8]
        add esi, edx
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        mov dword ptr ds : [eax+8], 0
        pop ebx
        public_6282519 : nop
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6282440)
    }
}

#undef public_6282468
#undef public_62824b7
#undef public_62824b9
#undef public_62824c5
#undef public_6282500
#undef public_6282519
