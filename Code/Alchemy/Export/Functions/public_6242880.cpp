#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242970);
CLANG_FORWARD_PROC_SYMBOL(public_6242980);
CLANG_FORWARD_PROC_SYMBOL(public_62429a0);
CLANG_FORWARD_PROC_SYMBOL(public_62429c0);
CLANG_FORWARD_PROC_SYMBOL(public_62429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6242a20);
CLANG_FORWARD_PROC_SYMBOL(public_6242a70);
CLANG_FORWARD_PROC_SYMBOL(public_6242ac0);

#define public_62428e6 _public_62428e6
#define public_624292b _public_624292b
#define public_624295a _public_624295a

PROC_DECLARE(0x6242880, internal_6242880, public_6242880);
extern "C" NAKED register_t __cdecl internal_6242880()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, offset _public_6242980
        mov dword ptr ds : [ecx+4], eax
        mov al, byte ptr ds : [public_6257c1c]
        test al, 1
        mov edx, offset _public_6242a20
        mov ecx, offset _public_6242a70
        jne public_62428e6
        or al, 1
        mov dword ptr ds : [public_6257c20], offset _public_6242970
        mov byte ptr ds : [public_6257c1c], al
        mov dword ptr ds : [public_6257c24], ebx
        mov dword ptr ds : [public_6257c28], offset _public_62429a0
        mov dword ptr ds : [public_6257c2c], offset _public_62429c0
        mov dword ptr ds : [public_6257c30], offset _public_62429f0
        mov dword ptr ds : [public_6257c34], edx
        mov dword ptr ds : [public_6257c38], ecx
        public_62428e6 : nop
        test al, 2
        jne public_624292b
        or al, 2
        mov dword ptr ds : [public_6257c3c], offset _public_6242970
        mov byte ptr ds : [public_6257c1c], al
        mov dword ptr ds : [public_6257c40], ebx
        mov dword ptr ds : [public_6257c44], offset _public_62429a0
        mov dword ptr ds : [public_6257c48], offset _public_62429c0
        mov dword ptr ds : [public_6257c4c], offset _public_6242ac0
        mov dword ptr ds : [public_6257c50], edx
        mov dword ptr ds : [public_6257c54], ecx
        public_624292b : nop
        mov eax, 1
        cpuid 
        mov dword ptr ss : [esp+4], edx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        pop ebx
        test eax, 0x2000000
        je public_624295a
        mov eax, dword ptr ds : [edx*4+public_6257c3c]
        mov dword ptr ds : [ecx+0x24], eax
        xor eax, eax
        pop ecx
        ret 8
        public_624295a : nop
        mov eax, dword ptr ds : [edx*4+public_6257c20]
        mov dword ptr ds : [ecx+0x24], eax
        xor eax, eax
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6242880)
    }
}

#undef public_62428e6
#undef public_624292b
#undef public_624295a
