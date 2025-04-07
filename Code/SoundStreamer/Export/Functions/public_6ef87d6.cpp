#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6ef45cb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef50fb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef87d6);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8da0);
CLANG_FORWARD_PROC_SYMBOL(public_6efa523);

#define public_6ef87e8 _public_6ef87e8
#define public_6ef87f0 _public_6ef87f0
#define public_6ef87fb _public_6ef87fb
#define public_6ef8808 _public_6ef8808
#define public_6ef882a _public_6ef882a
#define public_6ef8835 _public_6ef8835
#define public_6ef8859 _public_6ef8859
#define public_6ef8866 _public_6ef8866
#define public_6ef886d _public_6ef886d

PROC_DECLARE(0x6ef87d6, internal_6ef87d6, public_6ef87d6);
extern "C" NAKED register_t __cdecl internal_6ef87d6()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6f02648], ebx
        push esi
        push edi
        jne public_6ef87e8
        call public_6efa523
        public_6ef87e8 : nop
        mov esi, dword ptr ds : [public_6f010b4]
        xor edi, edi
        public_6ef87f0 : nop
        mov al, byte ptr ds : [esi]
        cmp al, bl
        je public_6ef8808
        cmp al, 0x3D
        je public_6ef87fb
        inc edi
        public_6ef87fb : nop
        push esi
        call public_6ef5230
        pop ecx
        lea esi, ds:[esi+eax+1]
        jmp public_6ef87f0
        public_6ef8808 : nop
        lea eax, ds:[edi*4+4]
        push eax
        call public_6ef45cb
        mov esi, eax
        pop ecx
        cmp esi, ebx
        mov dword ptr ds : [public_6f01118], esi
        jne public_6ef882a
        push 9
        call public_6ef50fb
        pop ecx
        public_6ef882a : nop
        mov edi, dword ptr ds : [public_6f010b4]
        cmp byte ptr ds : [edi], bl
        je public_6ef886d
        push ebp
        public_6ef8835 : nop
        push edi
        call public_6ef5230
        mov ebp, eax
        pop ecx
        inc ebp
        cmp byte ptr ds : [edi], 0x3D
        je public_6ef8866
        push ebp
        call public_6ef45cb
        cmp eax, ebx
        pop ecx
        mov dword ptr ds : [esi], eax
        jne public_6ef8859
        push 9
        call public_6ef50fb
        pop ecx
        public_6ef8859 : nop
        push edi
        push dword ptr ds : [esi]
        call public_6ef8da0
        pop ecx
        add esi, 4
        pop ecx
        public_6ef8866 : nop
        add edi, ebp
        cmp byte ptr ds : [edi], bl
        jne public_6ef8835
        pop ebp
        public_6ef886d : nop
        push dword ptr ds : [public_6f010b4]
        call public_6ef4512
        pop ecx
        mov dword ptr ds : [public_6f010b4], ebx
        mov dword ptr ds : [esi], ebx
        pop edi
        pop esi
        mov dword ptr ds : [public_6f02644], 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef87d6)
    }
}

#undef public_6ef87e8
#undef public_6ef87f0
#undef public_6ef87fb
#undef public_6ef8808
#undef public_6ef882a
#undef public_6ef8835
#undef public_6ef8859
#undef public_6ef8866
#undef public_6ef886d
