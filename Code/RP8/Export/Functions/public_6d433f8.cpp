#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d433f8);

#define public_6d43457 _public_6d43457
#define public_6d43470 _public_6d43470
#define public_6d43473 _public_6d43473
#define public_6d43483 _public_6d43483
#define public_6d434a9 _public_6d434a9
#define public_6d434c2 _public_6d434c2
#define public_6d434c4 _public_6d434c4
#define public_6d434d1 _public_6d434d1
#define public_6d434f5 _public_6d434f5
#define public_6d4350e _public_6d4350e
#define public_6d4350f _public_6d4350f
#define public_6d4351a _public_6d4351a
#define public_6d43525 _public_6d43525
#define public_6d4354f _public_6d4354f
#define public_6d4355c _public_6d4355c
#define public_6d43567 _public_6d43567
#define public_6d43597 _public_6d43597
#define public_6d435a5 _public_6d435a5
#define public_6d435b9 _public_6d435b9
#define public_6d435e8 _public_6d435e8
#define public_6d435f4 _public_6d435f4
#define public_6d435fb _public_6d435fb
#define public_6d435fd _public_6d435fd

PROC_DECLARE(0x6d433f8, internal_6d433f8, public_6d433f8);
extern "C" NAKED register_t __cdecl internal_6d433f8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        cmp byte ptr ds : [esi+8], 3
        mov eax, dword ptr ds : [esi]
        jne public_6d435fd
        mov cl, byte ptr ds : [esi+9]
        cmp cl, 8
        push ebx
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        jae public_6d43525
        movzx ecx, cl
        dec ecx
        je public_6d434d1
        dec ecx
        je public_6d43483
        dec ecx
        dec ecx
        jne public_6d4351a
        lea ecx, ds:[eax+edi-1]
        mov dword ptr ss : [ebp-4], ecx
        lea edx, ds:[eax-1]
        mov ecx, eax
        shr edx, 1
        and ecx, 1
        shl ecx, 2
        add edx, edi
        test eax, eax
        mov dword ptr ss : [ebp+8], ecx
        jbe public_6d4351a
        mov dword ptr ss : [ebp-8], eax
        public_6d43457 : nop
        mov bl, byte ptr ds : [edx]
        shr bl, cl
        mov ecx, dword ptr ss : [ebp-4]
        and bl, 0xF
        mov byte ptr ds : [ecx], bl
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, 4
        jne public_6d43470
        xor ecx, ecx
        dec edx
        jmp public_6d43473
        public_6d43470 : nop
        add ecx, 4
        public_6d43473 : nop
        dec dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d43457
        jmp public_6d4351a
        public_6d43483 : nop
        lea ecx, ds:[eax+edi-1]
        mov dword ptr ss : [ebp-4], ecx
        lea ebx, ds:[eax-1]
        push 3
        and ebx, 3
        lea edx, ds:[eax-1]
        pop ecx
        shr edx, 2
        sub ecx, ebx
        shl ecx, 1
        add edx, edi
        test eax, eax
        mov dword ptr ss : [ebp+8], ecx
        jbe public_6d4351a
        mov dword ptr ss : [ebp-8], eax
        public_6d434a9 : nop
        mov bl, byte ptr ds : [edx]
        shr bl, cl
        mov ecx, dword ptr ss : [ebp-4]
        and bl, 3
        mov byte ptr ds : [ecx], bl
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, 6
        jne public_6d434c2
        xor ecx, ecx
        dec edx
        jmp public_6d434c4
        public_6d434c2 : nop
        inc ecx
        inc ecx
        public_6d434c4 : nop
        dec dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d434a9
        jmp public_6d4351a
        public_6d434d1 : nop
        lea ecx, ds:[eax+edi-1]
        lea edx, ds:[eax-1]
        mov dword ptr ss : [ebp-4], ecx
        lea ebx, ds:[eax-1]
        push 7
        shr edx, 3
        and ebx, 7
        pop ecx
        sub ecx, ebx
        add edx, edi
        test eax, eax
        mov dword ptr ss : [ebp+8], ecx
        jbe public_6d4351a
        mov dword ptr ss : [ebp-8], eax
        public_6d434f5 : nop
        mov bl, byte ptr ds : [edx]
        shr bl, cl
        mov ecx, dword ptr ss : [ebp-4]
        and bl, 1
        mov byte ptr ds : [ecx], bl
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, 7
        jne public_6d4350e
        xor ecx, ecx
        dec edx
        jmp public_6d4350f
        public_6d4350e : nop
        inc ecx
        public_6d4350f : nop
        dec dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d434f5
        public_6d4351a : nop
        mov byte ptr ds : [esi+9], 8
        mov byte ptr ds : [esi+0xB], 8
        mov dword ptr ds : [esi+4], eax
        public_6d43525 : nop
        cmp byte ptr ds : [esi+9], 8
        jne public_6d435fb
        cmp dword ptr ss : [ebp+0x14], 0
        lea edx, ds:[eax+edi-1]
        je public_6d435a5
        mov ebx, eax
        shl ebx, 2
        test eax, eax
        mov dword ptr ss : [ebp-8], ebx
        lea ecx, ds:[ebx+edi-1]
        jbe public_6d43597
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp+0x10]
        public_6d4354f : nop
        movzx edi, byte ptr ds : [edx]
        cmp edi, dword ptr ss : [ebp+0x18]
        jl public_6d4355c
        or byte ptr ds : [ecx], 0xFF
        jmp public_6d43567
        public_6d4355c : nop
        movzx edi, byte ptr ds : [edx]
        mov ebx, dword ptr ss : [ebp+0x14]
        mov bl, byte ptr ds : [edi+ebx]
        mov byte ptr ds : [ecx], bl
        public_6d43567 : nop
        movzx edi, byte ptr ds : [edx]
        dec ecx
        lea ebx, ds:[eax+edi*2]
        mov bl, byte ptr ds : [edi+ebx+2]
        mov byte ptr ds : [ecx], bl
        movzx edi, byte ptr ds : [edx]
        dec ecx
        lea ebx, ds:[eax+edi*2]
        mov bl, byte ptr ds : [edi+ebx+1]
        mov byte ptr ds : [ecx], bl
        movzx edi, byte ptr ds : [edx]
        dec ecx
        lea ebx, ds:[eax+edi*2]
        mov bl, byte ptr ds : [edi+ebx]
        mov byte ptr ds : [ecx], bl
        dec ecx
        dec edx
        dec dword ptr ss : [ebp+8]
        jne public_6d4354f
        mov ebx, dword ptr ss : [ebp-8]
        public_6d43597 : nop
        mov byte ptr ds : [esi+0xB], 0x20
        mov byte ptr ds : [esi+8], 6
        mov byte ptr ds : [esi+0xA], 4
        jmp public_6d435f4
        public_6d435a5 : nop
        test eax, eax
        lea ebx, ds:[eax+eax*2]
        mov dword ptr ss : [ebp-8], ebx
        lea ecx, ds:[ebx+edi-1]
        jbe public_6d435e8
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp+0x10]
        public_6d435b9 : nop
        movzx edi, byte ptr ds : [edx]
        lea ebx, ds:[eax+edi*2]
        mov bl, byte ptr ds : [edi+ebx+2]
        mov byte ptr ds : [ecx], bl
        movzx edi, byte ptr ds : [edx]
        dec ecx
        lea ebx, ds:[eax+edi*2]
        mov bl, byte ptr ds : [edi+ebx+1]
        mov byte ptr ds : [ecx], bl
        movzx edi, byte ptr ds : [edx]
        dec ecx
        lea ebx, ds:[eax+edi*2]
        mov bl, byte ptr ds : [edi+ebx]
        mov byte ptr ds : [ecx], bl
        dec ecx
        dec edx
        dec dword ptr ss : [ebp+8]
        jne public_6d435b9
        mov ebx, dword ptr ss : [ebp-8]
        public_6d435e8 : nop
        mov byte ptr ds : [esi+0xB], 0x18
        mov byte ptr ds : [esi+8], 2
        mov byte ptr ds : [esi+0xA], 3
        public_6d435f4 : nop
        mov byte ptr ds : [esi+9], 8
        mov dword ptr ds : [esi+4], ebx
        public_6d435fb : nop
        pop edi
        pop ebx
        public_6d435fd : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d433f8)
    }
}

#undef public_6d43457
#undef public_6d43470
#undef public_6d43473
#undef public_6d43483
#undef public_6d434a9
#undef public_6d434c2
#undef public_6d434c4
#undef public_6d434d1
#undef public_6d434f5
#undef public_6d4350e
#undef public_6d4350f
#undef public_6d4351a
#undef public_6d43525
#undef public_6d4354f
#undef public_6d4355c
#undef public_6d43567
#undef public_6d43597
#undef public_6d435a5
#undef public_6d435b9
#undef public_6d435e8
#undef public_6d435f4
#undef public_6d435fb
#undef public_6d435fd
