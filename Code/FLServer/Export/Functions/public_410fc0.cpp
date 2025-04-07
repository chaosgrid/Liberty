#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410fc0);
CLANG_FORWARD_PROC_SYMBOL(public_411b50);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_410fe4 _public_410fe4
#define public_411002 _public_411002
#define public_41100d _public_41100d
#define public_411016 _public_411016
#define public_411021 _public_411021
#define public_41103d _public_41103d
#define public_411054 _public_411054
#define public_411061 _public_411061
#define public_41106c _public_41106c
#define public_41106f _public_41106f
#define public_411087 _public_411087
#define public_411092 _public_411092
#define public_411095 _public_411095
#define public_4110aa _public_4110aa
#define public_4110b5 _public_4110b5
#define public_4110c0 _public_4110c0
#define public_4110c3 _public_4110c3
#define public_4110d7 _public_4110d7
#define public_4110e3 _public_4110e3
#define public_4110ef _public_4110ef
#define public_4110f2 _public_4110f2
#define public_411110 _public_411110
#define public_41114f _public_41114f
#define public_411162 _public_411162
#define public_41116d _public_41116d
#define public_411170 _public_411170
#define public_41117b _public_41117b
#define public_41118e _public_41118e
#define public_4111b5 _public_4111b5
#define public_4111cf _public_4111cf
#define public_4111f5 _public_4111f5
#define public_411208 _public_411208
#define public_411215 _public_411215
#define public_411217 _public_411217
#define public_411222 _public_411222
#define public_411239 _public_411239
#define public_411251 _public_411251
#define public_41125e _public_41125e
#define public_411260 _public_411260
#define public_41126c _public_41126c
#define public_411296 _public_411296
#define public_4112ae _public_4112ae
#define public_4112be _public_4112be
#define public_4112c8 _public_4112c8
#define public_4112eb _public_4112eb
#define public_4112fe _public_4112fe
#define public_411309 _public_411309
#define public_41130c _public_41130c
#define public_411316 _public_411316
#define public_41133f _public_41133f
#define public_411352 _public_411352
#define public_41135f _public_41135f
#define public_411361 _public_411361
#define public_411364 _public_411364
#define public_411367 _public_411367
#define public_41136a _public_41136a

PROC_DECLARE(0x410fc0, internal_410fc0, public_410fc0);
extern "C" NAKED register_t __cdecl internal_410fc0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_411b50
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_411002
        mov eax, dword ptr ds : [esi+8]
        public_410fe4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_411087
        mov dword ptr ds : [ecx+4], eax
        jmp public_411095
        public_411002 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_41100d
        mov eax, edx
        jmp public_410fe4
        public_41100d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_411021
        public_411016 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_411016
        public_411021 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_410fe4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_41103d
        mov dword ptr ds : [eax+4], ecx
        jmp public_411054
        public_41103d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_411054 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_411061
        mov dword ptr ds : [edx+4], ecx
        jmp public_41106f
        public_411061 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_41106c
        mov dword ptr ds : [edx], ecx
        jmp public_41106f
        public_41106c : nop
        mov dword ptr ds : [edx+8], ecx
        public_41106f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_4110f2
        public_411087 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_411092
        mov dword ptr ds : [ecx], eax
        jmp public_411095
        public_411092 : nop
        mov dword ptr ds : [ecx+8], eax
        public_411095 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_4110c3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4110aa
        mov edx, dword ptr ds : [esi+4]
        jmp public_4110c0
        public_4110aa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_4110c0
        public_4110b5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_4110b5
        public_4110c0 : nop
        mov dword ptr ss : [ebp], edx
        public_4110c3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_4110f2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4110d7
        mov edx, dword ptr ds : [esi+4]
        jmp public_4110ef
        public_4110d7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_4110ef
        public_4110e3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_4110e3
        public_4110ef : nop
        mov dword ptr ss : [ebp+8], edx
        public_4110f2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_41136a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_411367
        nop 
        public_411110 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_411367
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4111cf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_41117b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_41114f
        mov dword ptr ds : [esi+4], ecx
        public_41114f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_411162
        mov dword ptr ds : [esi+4], edx
        jmp public_411170
        public_411162 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_41116d
        mov dword ptr ds : [esi], edx
        jmp public_411170
        public_41116d : nop
        mov dword ptr ds : [esi+8], edx
        public_411170 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_41117b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_41118e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_411239
        public_41118e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_41126c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4111b5
        mov dword ptr ds : [esi+4], ecx
        public_4111b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_411251
        mov dword ptr ds : [esi+4], edx
        jmp public_411260
        public_4111cf : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_411222
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4111f5
        mov dword ptr ds : [esi+4], ecx
        public_4111f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_411208
        mov dword ptr ds : [esi+4], edx
        jmp public_411217
        public_411208 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_411215
        mov dword ptr ds : [esi+8], edx
        jmp public_411217
        public_411215 : nop
        mov dword ptr ds : [esi], edx
        public_411217 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_411222 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_4112c8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_4112c8
        public_411239 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_411110
        jmp public_411367
        public_411251 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_41125e
        mov dword ptr ds : [esi+8], edx
        jmp public_411260
        public_41125e : nop
        mov dword ptr ds : [esi], edx
        public_411260 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_41126c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_411296
        mov dword ptr ds : [esi+4], ecx
        public_411296 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4112ae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_411364
        public_4112ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4112be
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_411364
        public_4112be : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_411364
        public_4112c8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_411316
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4112eb
        mov dword ptr ds : [esi+4], ecx
        public_4112eb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4112fe
        mov dword ptr ds : [esi+4], edx
        jmp public_41130c
        public_4112fe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_411309
        mov dword ptr ds : [esi], edx
        jmp public_41130c
        public_411309 : nop
        mov dword ptr ds : [esi+8], edx
        public_41130c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_411316 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_41133f
        mov dword ptr ds : [esi+4], ecx
        public_41133f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_411352
        mov dword ptr ds : [esi+4], edx
        jmp public_411361
        public_411352 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_41135f
        mov dword ptr ds : [esi+8], edx
        jmp public_411361
        public_41135f : nop
        mov dword ptr ds : [esi], edx
        public_411361 : nop
        mov dword ptr ds : [edx+8], ecx
        public_411364 : nop
        mov dword ptr ds : [ecx+4], edx
        public_411367 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_41136a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_418978
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x410fc0)
    }
}

#undef public_410fe4
#undef public_411002
#undef public_41100d
#undef public_411016
#undef public_411021
#undef public_41103d
#undef public_411054
#undef public_411061
#undef public_41106c
#undef public_41106f
#undef public_411087
#undef public_411092
#undef public_411095
#undef public_4110aa
#undef public_4110b5
#undef public_4110c0
#undef public_4110c3
#undef public_4110d7
#undef public_4110e3
#undef public_4110ef
#undef public_4110f2
#undef public_411110
#undef public_41114f
#undef public_411162
#undef public_41116d
#undef public_411170
#undef public_41117b
#undef public_41118e
#undef public_4111b5
#undef public_4111cf
#undef public_4111f5
#undef public_411208
#undef public_411215
#undef public_411217
#undef public_411222
#undef public_411239
#undef public_411251
#undef public_41125e
#undef public_411260
#undef public_41126c
#undef public_411296
#undef public_4112ae
#undef public_4112be
#undef public_4112c8
#undef public_4112eb
#undef public_4112fe
#undef public_411309
#undef public_41130c
#undef public_411316
#undef public_41133f
#undef public_411352
#undef public_41135f
#undef public_411361
#undef public_411364
#undef public_411367
#undef public_41136a
