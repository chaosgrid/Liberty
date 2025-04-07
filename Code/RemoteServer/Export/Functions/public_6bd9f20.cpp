#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd9f20);
CLANG_FORWARD_PROC_SYMBOL(public_6bda100);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd9f32 _public_6bd9f32
#define public_6bd9f62 _public_6bd9f62

PROC_DECLARE(0x6bd9f20, internal_6bd9f20, public_6bd9f20);
extern "C" NAKED register_t __cdecl internal_6bd9f20()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_6bd9f62
        push esi
        public_6bd9f32 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6bda100
        push esi
        call public_6c09aaa
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6bd9f32
        pop esi
        public_6bd9f62 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bd9f20)
    }
}

#undef public_6bd9f32
#undef public_6bd9f62
