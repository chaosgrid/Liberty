#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415180);

#define public_4151a2 _public_4151a2
#define public_4151b7 _public_4151b7
#define public_4151c2 _public_4151c2
#define public_4151dc _public_4151dc
#define public_4151de _public_4151de
#define public_4151e3 _public_4151e3
#define public_4151e9 _public_4151e9
#define public_4151f9 _public_4151f9

PROC_DECLARE(0x415180, internal_415180, public_415180);
extern "C" NAKED register_t __cdecl internal_415180()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ds : [eax+4]
        cmp esi, edx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        je public_4151f9
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_41b8fc]
        push edi
        public_4151a2 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov edx, offset public_41c3f4
        je public_4151b7
        mov edx, eax
        public_4151b7 : nop
        mov edi, dword ptr ds : [esi+0x14]
        cmp edi, ebx
        mov ecx, edi
        jb public_4151c2
        mov ecx, ebx
        public_4151c2 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push ecx
        push edx
        push eax
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_4151dc
        cmp edi, ebx
        jb public_4151de
        cmp edi, ebx
        setne al
        test eax, eax
        public_4151dc : nop
        jge public_4151e3
        public_4151de : nop
        mov esi, dword ptr ds : [esi+8]
        jmp public_4151e9
        public_4151e3 : nop
        mov dword ptr ss : [esp+0x10], esi
        mov esi, dword ptr ds : [esi]
        public_4151e9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp esi, dword ptr ds : [eax+8]
        jne public_4151a2
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        pop ebx
        public_4151f9 : nop
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x415180)
    }
}

#undef public_4151a2
#undef public_4151b7
#undef public_4151c2
#undef public_4151dc
#undef public_4151de
#undef public_4151e3
#undef public_4151e9
#undef public_4151f9
