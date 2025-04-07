#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d77a0);

#define public_65d77bb _public_65d77bb
#define public_65d77cd _public_65d77cd
#define public_65d77e3 _public_65d77e3
#define public_65d77e4 _public_65d77e4
#define public_65d77e9 _public_65d77e9
#define public_65d77f3 _public_65d77f3
#define public_65d77f5 _public_65d77f5
#define public_65d77fa _public_65d77fa
#define public_65d782d _public_65d782d
#define public_65d782e _public_65d782e
#define public_65d7833 _public_65d7833
#define public_65d7839 _public_65d7839
#define public_65d783f _public_65d783f

PROC_DECLARE(0x65d77a0, internal_65d77a0, public_65d77a0);
extern "C" NAKED register_t __cdecl internal_65d77a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        test eax, eax
        je public_65d77f3
        mov edx, dword ptr ss : [esp+8]
        xor ebx, ebx
        mov bl, byte ptr ss : [esp+0xC]
        test edx, 3
        je public_65d77cd
        public_65d77bb : nop
        mov cl, byte ptr ds : [edx]
        inc edx
        xor cl, bl
        je public_65d782e
        dec eax
        je public_65d77f3
        test edx, 3
        jne public_65d77bb
        public_65d77cd : nop
        sub eax, 4
        jb public_65d77e4
        push edi
        mov edi, ebx
        shl ebx, 8
        add ebx, edi
        mov edi, ebx
        shl ebx, 0x10
        add ebx, edi
        jmp public_65d77fa
        public_65d77e3 : nop
        pop edi
        public_65d77e4 : nop
        add eax, 4
        je public_65d77f3
        public_65d77e9 : nop
        mov cl, byte ptr ds : [edx]
        inc edx
        xor cl, bl
        je public_65d782e
        dec eax
        jne public_65d77e9
        public_65d77f3 : nop
        pop ebx
        ret 
        public_65d77f5 : nop
        sub eax, 4
        jb public_65d77e3
        public_65d77fa : nop
        mov ecx, dword ptr ds : [edx]
        xor ecx, ebx
        mov edi, 0x7EFEFEFF
        add edi, ecx
        xor ecx, 0xFFFFFFFF
        xor ecx, edi
        add edx, 4
        and ecx, 0x81010100
        je public_65d77f5
        mov ecx, dword ptr ds : [edx-4]
        xor cl, bl
        je public_65d783f
        xor ch, bl
        je public_65d7839
        shr ecx, 0x10
        xor cl, bl
        je public_65d7833
        xor ch, bl
        je public_65d782d
        jmp public_65d77f5
        public_65d782d : nop
        pop edi
        public_65d782e : nop
        lea eax, ds:[edx-1]
        pop ebx
        ret 
        public_65d7833 : nop
        lea eax, ds:[edx-2]
        pop edi
        pop ebx
        ret 
        public_65d7839 : nop
        lea eax, ds:[edx-3]
        pop edi
        pop ebx
        ret 
        public_65d783f : nop
        lea eax, ds:[edx-4]
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d77a0)
    }
}

#undef public_65d77bb
#undef public_65d77cd
#undef public_65d77e3
#undef public_65d77e4
#undef public_65d77e9
#undef public_65d77f3
#undef public_65d77f5
#undef public_65d77fa
#undef public_65d782d
#undef public_65d782e
#undef public_65d7833
#undef public_65d7839
#undef public_65d783f
