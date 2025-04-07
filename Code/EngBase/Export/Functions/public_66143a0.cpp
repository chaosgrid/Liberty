#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66143a0);

#define public_66143c4 _public_66143c4
#define public_66143d6 _public_66143d6
#define public_66143fa _public_66143fa
#define public_66143fd _public_66143fd
#define public_6614412 _public_6614412
#define public_6614415 _public_6614415

PROC_DECLARE(0x66143a0, internal_66143a0, public_66143a0);
extern "C" NAKED register_t __cdecl internal_66143a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        push edi
        cmp esi, ebp
        je public_6614415
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_66143c4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], ebp
        public_66143c4 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        mov dword ptr ds : [esi], eax
        je public_66143d6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_66143d6 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [public_662906c]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebp
        je public_66143fa
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        jmp public_66143fd
        public_66143fa : nop
        mov dword ptr ds : [esi+0xC], ebp
        public_66143fd : nop
        mov edi, dword ptr ds : [edi+0x10]
        cmp edi, ebp
        je public_6614412
        push edi
        call ebx
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6614412 : nop
        mov dword ptr ds : [esi+0x10], ebp
        public_6614415 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x66143a0)
    }
}

#undef public_66143c4
#undef public_66143d6
#undef public_66143fa
#undef public_66143fd
#undef public_6614412
#undef public_6614415
