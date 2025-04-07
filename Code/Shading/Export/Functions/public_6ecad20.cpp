#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec69e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eca760);
CLANG_FORWARD_PROC_SYMBOL(public_6ecad20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb160);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb560);

#define public_6ecad48 _public_6ecad48
#define public_6ecad62 _public_6ecad62
#define public_6ecad6d _public_6ecad6d
#define public_6ecad76 _public_6ecad76
#define public_6ecad81 _public_6ecad81
#define public_6ecad9b _public_6ecad9b
#define public_6ecadb2 _public_6ecadb2
#define public_6ecadbf _public_6ecadbf
#define public_6ecadca _public_6ecadca
#define public_6ecadcd _public_6ecadcd
#define public_6ecade3 _public_6ecade3
#define public_6ecadee _public_6ecadee
#define public_6ecadf1 _public_6ecadf1
#define public_6ecae07 _public_6ecae07
#define public_6ecae11 _public_6ecae11
#define public_6ecae1b _public_6ecae1b
#define public_6ecae1d _public_6ecae1d
#define public_6ecae34 _public_6ecae34
#define public_6ecae40 _public_6ecae40
#define public_6ecae4b _public_6ecae4b
#define public_6ecae4e _public_6ecae4e
#define public_6ecae64 _public_6ecae64
#define public_6ecaea5 _public_6ecaea5
#define public_6ecaeb8 _public_6ecaeb8
#define public_6ecaec3 _public_6ecaec3
#define public_6ecaec6 _public_6ecaec6
#define public_6ecaed1 _public_6ecaed1
#define public_6ecaee6 _public_6ecaee6
#define public_6ecaf0f _public_6ecaf0f
#define public_6ecaf29 _public_6ecaf29
#define public_6ecaf50 _public_6ecaf50
#define public_6ecaf63 _public_6ecaf63
#define public_6ecaf70 _public_6ecaf70
#define public_6ecaf72 _public_6ecaf72
#define public_6ecaf7d _public_6ecaf7d
#define public_6ecaf96 _public_6ecaf96
#define public_6ecafae _public_6ecafae
#define public_6ecafbb _public_6ecafbb
#define public_6ecafbd _public_6ecafbd
#define public_6ecafc9 _public_6ecafc9
#define public_6ecaff5 _public_6ecaff5
#define public_6ecb00d _public_6ecb00d
#define public_6ecb01d _public_6ecb01d
#define public_6ecb027 _public_6ecb027
#define public_6ecb04c _public_6ecb04c
#define public_6ecb05f _public_6ecb05f
#define public_6ecb06a _public_6ecb06a
#define public_6ecb06d _public_6ecb06d
#define public_6ecb077 _public_6ecb077
#define public_6ecb0a2 _public_6ecb0a2
#define public_6ecb0b5 _public_6ecb0b5
#define public_6ecb0c2 _public_6ecb0c2
#define public_6ecb0c4 _public_6ecb0c4
#define public_6ecb0c7 _public_6ecb0c7
#define public_6ecb0ca _public_6ecb0ca
#define public_6ecb0ce _public_6ecb0ce
#define public_6ecb0e0 _public_6ecb0e0
#define public_6ecb133 _public_6ecb133

PROC_DECLARE(0x6ecad20, internal_6ecad20, public_6ecad20);
extern "C" NAKED register_t __cdecl internal_6ecad20()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x14], edi
        call public_6ecb560
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov ebp, esi
        jne public_6ecad62
        mov eax, dword ptr ds : [esi+8]
        public_6ecad48 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ecade3
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ecadf1
        public_6ecad62 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ecad6d
        mov eax, edx
        jmp public_6ecad48
        public_6ecad6d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6ecad81
        public_6ecad76 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6ecad76
        public_6ecad81 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov ebp, ecx
        je public_6ecad48
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ecad9b
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ecadb2
        public_6ecad9b : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ecadb2 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ecadbf
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ecadcd
        public_6ecadbf : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ecadca
        mov dword ptr ds : [edx], ecx
        jmp public_6ecadcd
        public_6ecadca : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ecadcd : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov ebp, esi
        jmp public_6ecae4e
        public_6ecade3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ecadee
        mov dword ptr ds : [ecx], eax
        jmp public_6ecadf1
        public_6ecadee : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ecadf1 : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ebx], esi
        jne public_6ecae1d
        mov edx, dword ptr ds : [esi+8]
        cmp edx, dword ptr ds : [edi+8]
        jne public_6ecae07
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx], ecx
        jmp public_6ecae1d
        public_6ecae07 : nop
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x1D], 0
        mov edx, eax
        jne public_6ecae1b
        public_6ecae11 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        cmp byte ptr ds : [ecx+0x1D], 0
        je public_6ecae11
        public_6ecae1b : nop
        mov dword ptr ds : [ebx], edx
        public_6ecae1d : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ebx+8], esi
        jne public_6ecae4e
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [edi+8]
        jne public_6ecae34
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_6ecae4e
        public_6ecae34 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp byte ptr ds : [ecx+0x1D], 0
        mov edx, eax
        jne public_6ecae4b
        nop 
        public_6ecae40 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        cmp byte ptr ds : [ecx+0x1D], 0
        je public_6ecae40
        public_6ecae4b : nop
        mov dword ptr ds : [ebx+8], edx
        public_6ecae4e : nop
        cmp byte ptr ss : [ebp+0x1C], 1
        jne public_6ecb0ce
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6ecb0ca
        public_6ecae64 : nop
        cmp byte ptr ds : [eax+0x1C], 1
        jne public_6ecb0ca
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ecaf29
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6ecaed1
        mov byte ptr ds : [ecx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ecaea5
        mov dword ptr ds : [esi+4], ecx
        public_6ecaea5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ecaeb8
        mov dword ptr ds : [esi+4], edx
        jmp public_6ecaec6
        public_6ecaeb8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ecaec3
        mov dword ptr ds : [esi], edx
        jmp public_6ecaec6
        public_6ecaec3 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ecaec6 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6ecaed1 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_6ecaee6
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], 1
        je public_6ecaf96
        public_6ecaee6 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_6ecafc9
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ecaf0f
        mov dword ptr ds : [esi+4], ecx
        public_6ecaf0f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ecafae
        mov dword ptr ds : [esi+4], edx
        jmp public_6ecafbd
        public_6ecaf29 : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6ecaf7d
        mov byte ptr ds : [ecx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ecaf50
        mov dword ptr ds : [esi+4], ecx
        public_6ecaf50 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ecaf63
        mov dword ptr ds : [esi+4], edx
        jmp public_6ecaf72
        public_6ecaf63 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ecaf70
        mov dword ptr ds : [esi+8], edx
        jmp public_6ecaf72
        public_6ecaf70 : nop
        mov dword ptr ds : [esi], edx
        public_6ecaf72 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ecaf7d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_6ecb027
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_6ecb027
        public_6ecaf96 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ecae64
        jmp public_6ecb0ca
        public_6ecafae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ecafbb
        mov dword ptr ds : [esi+8], edx
        jmp public_6ecafbd
        public_6ecafbb : nop
        mov dword ptr ds : [esi], edx
        public_6ecafbd : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ecafc9 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ecaff5
        mov dword ptr ds : [esi+4], ecx
        public_6ecaff5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov edi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ecb00d
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ecb0c7
        public_6ecb00d : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ecb01d
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ecb0c7
        public_6ecb01d : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ecb0c7
        public_6ecb027 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], 1
        jne public_6ecb077
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ecb04c
        mov dword ptr ds : [esi+4], ecx
        public_6ecb04c : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ecb05f
        mov dword ptr ds : [esi+4], edx
        jmp public_6ecb06d
        public_6ecb05f : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ecb06a
        mov dword ptr ds : [esi], edx
        jmp public_6ecb06d
        public_6ecb06a : nop
        mov dword ptr ds : [esi+8], edx
        public_6ecb06d : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ecb077 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ecb0a2
        mov dword ptr ds : [esi+4], ecx
        public_6ecb0a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov edi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ecb0b5
        mov dword ptr ds : [edi+4], edx
        jmp public_6ecb0c4
        public_6ecb0b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ecb0c2
        mov dword ptr ds : [esi+8], edx
        jmp public_6ecb0c4
        public_6ecb0c2 : nop
        mov dword ptr ds : [esi], edx
        public_6ecb0c4 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ecb0c7 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ecb0ca : nop
        mov byte ptr ds : [eax+0x1C], 1
        public_6ecb0ce : nop
        mov ebx, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ds : [ebx]
        add ebp, 0x10
        cmp edi, ebx
        je public_6ecb133
        lea ebx, ds:[ebx]
        public_6ecb0e0 : nop
        push edi
        mov esi, edi
        call public_6ecb160
        mov edi, dword ptr ds : [eax]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], esi
        call public_6eca760
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        push ecx
        mov dword ptr ds : [edx+4], eax
        call public_6ec69e0
        add esp, 4
        push 1
        push esi
        mov ecx, ebp
        call public_6ecb170
        mov ecx, dword ptr ss : [ebp+8]
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [ebp+8], ecx
        jne public_6ecb0e0
        public_6ecb133 : nop
        xor eax, eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        dec ecx
        pop esi
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, dword ptr ss : [esp+0x18]
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6ecad20)
    }
}

#undef public_6ecad48
#undef public_6ecad62
#undef public_6ecad6d
#undef public_6ecad76
#undef public_6ecad81
#undef public_6ecad9b
#undef public_6ecadb2
#undef public_6ecadbf
#undef public_6ecadca
#undef public_6ecadcd
#undef public_6ecade3
#undef public_6ecadee
#undef public_6ecadf1
#undef public_6ecae07
#undef public_6ecae11
#undef public_6ecae1b
#undef public_6ecae1d
#undef public_6ecae34
#undef public_6ecae40
#undef public_6ecae4b
#undef public_6ecae4e
#undef public_6ecae64
#undef public_6ecaea5
#undef public_6ecaeb8
#undef public_6ecaec3
#undef public_6ecaec6
#undef public_6ecaed1
#undef public_6ecaee6
#undef public_6ecaf0f
#undef public_6ecaf29
#undef public_6ecaf50
#undef public_6ecaf63
#undef public_6ecaf70
#undef public_6ecaf72
#undef public_6ecaf7d
#undef public_6ecaf96
#undef public_6ecafae
#undef public_6ecafbb
#undef public_6ecafbd
#undef public_6ecafc9
#undef public_6ecaff5
#undef public_6ecb00d
#undef public_6ecb01d
#undef public_6ecb027
#undef public_6ecb04c
#undef public_6ecb05f
#undef public_6ecb06a
#undef public_6ecb06d
#undef public_6ecb077
#undef public_6ecb0a2
#undef public_6ecb0b5
#undef public_6ecb0c2
#undef public_6ecb0c4
#undef public_6ecb0c7
#undef public_6ecb0ca
#undef public_6ecb0ce
#undef public_6ecb0e0
#undef public_6ecb133
