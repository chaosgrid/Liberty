#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec31a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec38c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4010);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4430);
CLANG_FORWARD_PROC_SYMBOL(public_6ec44a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec1f60 _public_6ec1f60
#define public_6ec1f85 _public_6ec1f85
#define public_6ec1f92 _public_6ec1f92
#define public_6ec1fa6 _public_6ec1fa6
#define public_6ec1fc4 _public_6ec1fc4
#define public_6ec1fd7 _public_6ec1fd7
#define public_6ec1ff6 _public_6ec1ff6
#define public_6ec200a _public_6ec200a
#define public_6ec2020 _public_6ec2020
#define public_6ec202d _public_6ec202d
#define public_6ec2035 _public_6ec2035
#define public_6ec203f _public_6ec203f
#define public_6ec2046 _public_6ec2046
#define public_6ec2050 _public_6ec2050

PROC_DECLARE(0x6ec1f30, internal_6ec1f30, public_6ec1f30);
extern "C" NAKED register_t __cdecl internal_6ec1f30()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        je public_6ec1f92
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        lea edi, ds:[ebx+0x3C]
        push ecx
        mov ecx, edi
        call public_6ec4430
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [ebx+0x40]
        je public_6ec1f92
        xor esi, esi
        nop 
        public_6ec1f60 : nop
        mov edx, dword ptr ds : [ecx+0x18]
        test edx, edx
        je public_6ec1f85
        mov eax, dword ptr ds : [ecx+0x1C]
        sub eax, edx
        sar eax, 2
        cmp esi, eax
        jae public_6ec1f85
        mov eax, dword ptr ds : [edx+esi*4]
        push eax
        mov ecx, ebx
        call public_6ec31a0
        mov ecx, dword ptr ss : [esp+0x14]
        inc esi
        jmp public_6ec1f60
        public_6ec1f85 : nop
        push ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call public_6ec4010
        public_6ec1f92 : nop
        mov eax, dword ptr ds : [ebx+0x58]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ec2050
        push ebp
        mov ebp, dword ptr ds : [public_6ed1054]
        public_6ec1fa6 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jg public_6ec200a
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6ec1fc4
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xB8]
        public_6ec1fc4 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        je public_6ec1ff6
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6ec1fd7
        push eax
        call ebp
        add esp, 4
        public_6ec1fd7 : nop
        lea ecx, ds:[edi+0x20]
        mov dword ptr ds : [edi], 0
        call public_6ec38c0
        lea ecx, ds:[edi+0x10]
        call public_6ec38c0
        push edi
        call public_6ed0c50
        add esp, 4
        public_6ec1ff6 : nop
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[ebx+0x54]
        call public_6ec44a0
        mov esi, dword ptr ss : [esp+0x18]
        jmp public_6ec2046
        public_6ec200a : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ec202d
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ec2046
        nop 
        public_6ec2020 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6ec2020
        jmp public_6ec2046
        public_6ec202d : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ec203f
        public_6ec2035 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ec2035
        public_6ec203f : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ec2046
        mov esi, eax
        public_6ec2046 : nop
        cmp esi, dword ptr ds : [ebx+0x58]
        jne public_6ec1fa6
        pop ebp
        public_6ec2050 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec1f30)
    }
}

#undef public_6ec1f60
#undef public_6ec1f85
#undef public_6ec1f92
#undef public_6ec1fa6
#undef public_6ec1fc4
#undef public_6ec1fd7
#undef public_6ec1ff6
#undef public_6ec200a
#undef public_6ec2020
#undef public_6ec202d
#undef public_6ec2035
#undef public_6ec203f
#undef public_6ec2046
#undef public_6ec2050
