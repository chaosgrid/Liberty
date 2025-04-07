#include "Server-PCH.h"


#define public_6d4629c _public_6d4629c
#define public_6d462a2 _public_6d462a2
#define public_6d462b4 _public_6d462b4
#define public_6d462cb _public_6d462cb
#define public_6d462cf _public_6d462cf
#define public_6d462d9 _public_6d462d9
#define public_6d462f0 _public_6d462f0
#define public_6d46300 _public_6d46300
#define public_6d46302 _public_6d46302
#define public_6d46317 _public_6d46317
#define public_6d4632c _public_6d4632c
#define public_6d46330 _public_6d46330
#define public_6d4633b _public_6d4633b

PROC_DECLARE(0x6d46250, internal_6d46250, public_6d46250);
extern "C" NAKED register_t __cdecl internal_6d46250()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        mov esi, 0x1F
        push edi
        mov dword ptr ds : [public_6d90138], 0x20
        mov dword ptr ds : [public_6d9013c], esi
        mov dword ptr ds : [public_6d90140], 0x8005
        mov dword ptr ds : [public_6d90144], ebp
        mov dword ptr ds : [public_6d90148], ebp
        mov byte ptr ds : [public_6d9014c], 1
        mov byte ptr ds : [public_6d9014d], 1
        mov dword ptr ds : [public_6d90150], ebp
        mov dword ptr ss : [esp+0x10], ebp
        jmp public_6d462a2
        public_6d4629c : nop
        mov esi, dword ptr ds : [public_6d9013c]
        public_6d462a2 : nop
        mov cl, byte ptr ds : [public_6d9014c]
        test cl, cl
        mov eax, ebp
        je public_6d462d9
        mov edx, ebp
        mov ebx, ebp
        xor eax, eax
        public_6d462b4 : nop
        mov ecx, 7
        sub ecx, eax
        mov edi, 1
        shl edi, cl
        test bl, 1
        je public_6d462cb
        or edx, edi
        jmp public_6d462cf
        public_6d462cb : nop
        not edi
        and edx, edi
        public_6d462cf : nop
        shr ebx, 1
        inc eax
        cmp eax, 8
        jl public_6d462b4
        mov eax, edx
        public_6d462d9 : nop
        lea ecx, ds:[esi-1]
        mov edi, 1
        shl edi, cl
        lea ecx, ds:[esi-8]
        shl eax, cl
        mov ecx, 8
        lea ecx, ds:[ecx]
        public_6d462f0 : nop
        test edi, eax
        je public_6d46300
        mov edx, dword ptr ds : [public_6d90140]
        add eax, eax
        xor eax, edx
        jmp public_6d46302
        public_6d46300 : nop
        shl eax, 1
        public_6d46302 : nop
        dec ecx
        jne public_6d462f0
        mov cl, byte ptr ds : [public_6d9014c]
        test cl, cl
        je public_6d4633b
        xor edx, edx
        test esi, esi
        mov ebx, eax
        jle public_6d4633b
        public_6d46317 : nop
        mov ecx, esi
        sub ecx, edx
        dec ecx
        mov ebp, 1
        shl ebp, cl
        test bl, 1
        je public_6d4632c
        or eax, ebp
        jmp public_6d46330
        public_6d4632c : nop
        not ebp
        and eax, ebp
        public_6d46330 : nop
        shr ebx, 1
        inc edx
        cmp edx, esi
        jl public_6d46317
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d4633b : nop
        lea ecx, ds:[edi+edi-1]
        or ecx, 1
        and ecx, eax
        mov dword ptr ds : [ebp*4+public_6d8fd38], ecx
        inc ebp
        cmp ebp, 0x100
        mov dword ptr ss : [esp+0x10], ebp
        jl public_6d4629c
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d46250)
    }
}

#undef public_6d4629c
#undef public_6d462a2
#undef public_6d462b4
#undef public_6d462cb
#undef public_6d462cf
#undef public_6d462d9
#undef public_6d462f0
#undef public_6d46300
#undef public_6d46302
#undef public_6d46317
#undef public_6d4632c
#undef public_6d46330
#undef public_6d4633b
