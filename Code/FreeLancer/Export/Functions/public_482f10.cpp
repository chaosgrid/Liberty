#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_477190);
CLANG_FORWARD_PROC_SYMBOL(public_4771d0);
CLANG_FORWARD_PROC_SYMBOL(public_4771f0);
CLANG_FORWARD_PROC_SYMBOL(public_4774c0);
CLANG_FORWARD_PROC_SYMBOL(public_482e00);
CLANG_FORWARD_PROC_SYMBOL(public_482f10);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_578690);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc016);

#define public_482faa _public_482faa
#define public_482fc9 _public_482fc9
#define public_482ff9 _public_482ff9
#define public_48301c _public_48301c
#define public_483030 _public_483030
#define public_483078 _public_483078
#define public_483093 _public_483093
#define public_4830bd _public_4830bd
#define public_4830c6 _public_4830c6
#define public_4830c8 _public_4830c8
#define public_4830d2 _public_4830d2
#define public_4830ed _public_4830ed
#define public_483117 _public_483117
#define public_483144 _public_483144
#define public_483156 _public_483156
#define public_483166 _public_483166
#define public_48317f _public_48317f
#define public_48318d _public_48318d
#define public_483191 _public_483191
#define public_4831b2 _public_4831b2
#define public_4831e6 _public_4831e6

PROC_DECLARE(0x482f10, internal_482f10, public_482f10);
extern "C" NAKED register_t __cdecl internal_482f10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc016 @0x482f12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc016
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB4
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xCC]
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        xor esi, esi
        push edi
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0xCC], esi
        mov byte ptr ss : [esp+0x28], cl
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0xCC], 1
        call public_5995f0
        cmp eax, ebx
        lea ecx, ss:[esp+0x14]
        jae public_482faa
        mov edi, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x3C]
        push edx
        call public_5995f0
        mov ecx, ebx
        sub ecx, eax
        push ecx
        push edi
        lea ecx, ss:[esp+0x20]
        call public_578690
        jmp public_482fc9
        public_482faa : nop
        call public_5995f0
        cmp ebx, eax
        jae public_482fc9
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+ebx*8]
        push edx
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_477190
        public_482fc9 : nop
        lea ecx, ss:[esp+0x28]
        call public_4771d0
        cmp eax, ebx
        lea ecx, ss:[esp+0x28]
        jae public_482ff9
        mov edi, dword ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x44]
        push edx
        call public_4771d0
        mov ecx, ebx
        sub ecx, eax
        push ecx
        push edi
        lea ecx, ss:[esp+0x34]
        call public_4771f0
        jmp public_48301c
        public_482ff9 : nop
        call public_4771d0
        cmp ebx, eax
        jae public_48301c
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, ebx
        shl eax, 7
        add eax, edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_4774c0
        public_48301c : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ds : [eax]
        xor edi, edi
        cmp ebp, eax
        je public_4830bd
        mov dword ptr ss : [esp+0x3C], esi
        nop 
        public_483030 : nop
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+edi*8], esi
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+edi*8+4], edi
        mov eax, dword ptr ds : [esi]
        push eax
        call public_482e00
        mov byte ptr ds : [esi+0x24], al
        mov esi, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [public_5c6360]
        push eax
        call dword ptr ds : [public_5c603c]
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 8
        test eax, eax
        jne public_483078
        mov eax, dword ptr ss : [esp+0x2C]
        mov word ptr ds : [ecx+eax], 0
        jmp public_483093
        public_483078 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push 0x40
        add ecx, edx
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [public_67eca8]
        push ecx
        push edx
        push eax
        call public_4347e0
        add esp, 0x10
        public_483093 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov ebp, dword ptr ss : [ebp]
        add ecx, 0x80
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0xD4]
        mov eax, dword ptr ds : [ecx+4]
        inc edi
        cmp ebp, eax
        jne public_483030
        mov ebx, dword ptr ss : [esp+0x24]
        xor esi, esi
        public_4830bd : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ebx-1]
        jmp public_4830c8
        public_4830c6 : nop
        xor esi, esi
        public_4830c8 : nop
        test ecx, ecx
        mov bl, 1
        jle public_483156
        public_4830d2 : nop
        mov edx, dword ptr ds : [eax+esi*8]
        mov dl, byte ptr ds : [edx+0x24]
        test dl, dl
        mov ecx, dword ptr ds : [eax+esi*8+4]
        mov edi, dword ptr ds : [eax+esi*8+0xC]
        jne public_4830ed
        mov ebp, dword ptr ds : [eax+esi*8+8]
        cmp byte ptr ss : [ebp+0x24], dl
        jne public_483117
        public_4830ed : nop
        mov ebp, dword ptr ds : [eax+esi*8+8]
        cmp dl, byte ptr ss : [ebp+0x24]
        jne public_483144
        mov eax, dword ptr ss : [esp+0x2C]
        shl edi, 7
        add edi, eax
        shl ecx, 7
        add ecx, eax
        push edi
        push ecx
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        mov eax, dword ptr ss : [esp+0x18]
        jle public_483144
        public_483117 : nop
        mov edx, dword ptr ds : [eax+esi*8]
        mov edi, dword ptr ds : [eax+esi*8+4]
        lea ecx, ds:[eax+esi*8]
        mov ebx, dword ptr ds : [eax+esi*8+8]
        mov dword ptr ds : [ecx], ebx
        mov eax, dword ptr ds : [eax+esi*8+0xC]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+esi*8+8], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+esi*8+0xC], edi
        mov eax, dword ptr ss : [esp+0x18]
        xor bl, bl
        public_483144 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        inc esi
        dec ecx
        cmp esi, ecx
        jl public_4830d2
        test bl, bl
        je public_4830c6
        public_483156 : nop
        mov ebx, dword ptr ss : [esp+0xD4]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_48317f
        public_483166 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, ebx
        call public_516f70
        cmp esi, edi
        jne public_483166
        mov eax, dword ptr ss : [esp+0x18]
        public_48317f : nop
        mov ecx, dword ptr ss : [esp+0x24]
        xor esi, esi
        xor ebp, ebp
        cmp ecx, esi
        jle public_4831e6
        jmp public_483191
        public_48318d : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_483191 : nop
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0xD4]
        mov esi, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_4831b2
        mov edi, eax
        public_4831b2 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ds:[ebx+ebp*8]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov eax, dword ptr ss : [esp+0xDC]
        mov edx, dword ptr ds : [eax+8]
        add esp, 8
        inc edx
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0x24]
        inc ebp
        cmp ebp, eax
        jl public_48318d
        xor esi, esi
        public_4831e6 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0xCC]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 4
        UNREACHABLE_TRAP(0x482f10)
    }
}

#undef public_482faa
#undef public_482fc9
#undef public_482ff9
#undef public_48301c
#undef public_483030
#undef public_483078
#undef public_483093
#undef public_4830bd
#undef public_4830c6
#undef public_4830c8
#undef public_4830d2
#undef public_4830ed
#undef public_483117
#undef public_483144
#undef public_483156
#undef public_483166
#undef public_48317f
#undef public_48318d
#undef public_483191
#undef public_4831b2
#undef public_4831e6
