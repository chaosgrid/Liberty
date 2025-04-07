#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801000);

#define public_6801970 _public_6801970
#define public_6801994 _public_6801994
#define public_6801998 _public_6801998
#define public_680199d _public_680199d
#define public_68019f2 _public_68019f2
#define public_68019f9 _public_68019f9
#define public_68019fb _public_68019fb
#define public_6801a12 _public_6801a12

PROC_DECLARE(0x6801950, internal_6801950, public_6801950);
extern "C" NAKED register_t __cdecl internal_6801950()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, 0x14
        jne public_6801a12
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        nop 
        public_6801970 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6801998
        test cl, cl
        je public_6801994
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6801998
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6801970
        public_6801994 : nop
        xor eax, eax
        jmp public_680199d
        public_6801998 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_680199d : nop
        test eax, eax
        pop ebx
        jne public_6801a12
        push 1
        push 0x28
        call dword ptr ds : [public_680c01c]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_68019f9
        mov ecx, esi
        call public_6801000
        lea eax, ds:[esi+0x1C]
        mov dword ptr ds : [eax], offset public_680c154
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_680c144
        mov dword ptr ds : [esi+4], offset public_680c120
        mov dword ptr ds : [esi+8], offset public_680c110
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x18], ecx
        jne public_68019f2
        mov dword ptr ds : [esi+0x18], eax
        jmp public_68019fb
        public_68019f2 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_68019fb
        public_68019f9 : nop
        xor esi, esi
        public_68019fb : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor eax, eax
        test esi, esi
        setne al
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        dec eax
        and eax, 0xFFFFFFFC
        ret 0xC
        public_6801a12 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], ebp
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6801950)
    }
}

#undef public_6801970
#undef public_6801994
#undef public_6801998
#undef public_680199d
#undef public_68019f2
#undef public_68019f9
#undef public_68019fb
#undef public_6801a12
