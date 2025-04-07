#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355490);
CLANG_FORWARD_PROC_SYMBOL(public_6358c50);
CLANG_FORWARD_PROC_SYMBOL(public_6358ee0);
CLANG_FORWARD_PROC_SYMBOL(public_635a1e0);

#define public_6358ef6 _public_6358ef6
#define public_6358f32 _public_6358f32
#define public_6358f37 _public_6358f37

PROC_DECLARE(0x6358ee0, internal_6358ee0, public_6358ee0);
extern "C" NAKED register_t __cdecl internal_6358ee0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        mov bx, word ptr ss : [ebp+2]
        mov dword ptr ss : [esp+8], ecx
        dec ebx
        js public_6358f37
        push esi
        push edi
        public_6358ef6 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax+ebx*4]
        cmp dword ptr ss : [esp+0x1C], esi
        je public_6358f32
        mov ecx, esi
        call public_635a1e0
        mov edi, dword ptr ds : [esi+0x40]
        push edi
        mov ecx, esi
        call public_6358c50
        mov ecx, dword ptr ds : [edi+0x54]
        and ecx, 0x300
        cmp ecx, 0x100
        jne public_6358f32
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0x20]
        push esi
        call public_6355490
        public_6358f32 : nop
        dec ebx
        jns public_6358ef6
        pop edi
        pop esi
        public_6358f37 : nop
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6358ee0)
    }
}

#undef public_6358ef6
#undef public_6358f32
#undef public_6358f37
